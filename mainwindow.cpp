#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <iostream>
#include <thread>
#include <QThread>
#include <QTimer>
#include <QTime>
#include <QDir>
#include <chrono>
#include <thread>

QChar derece(0260);
QString dereceSimge="C";

bool ilkacilis=true;
bool klimaAcikmi=false;
bool otomatikMod=true;
bool zamanlayici=false;
bool elleacildi=false;

int gelenIcSicaklik=20;
int gelenDisSicaklik=20;
int gelenNem=37;
int ayarlananSicaklik=25;
int ayarlananZaman=15;
int maxSicaklik=41;
int minSicaklik=15;
int minZaman=5;
int sayac=0;
int maxZaman=120;

QString yap();
QString kabinIciYazi="Kabin İçi Sıcaklık:";
QString disSicaklikYazi="Dış Sıcaklık:";
QString nemYazi="Nem: %";
QString zamanYazi=" DK";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->disSicaklik->setText("KABİN DIŞI SICAKLIK: "+QString::number(5)+derece+"C");
    ui->icSicaklik->setText("KABİN İÇİ SICAKLIK: "+QString::number(5)+derece+"C");
    ui->sicaklikAyarLbl->setText(QString::number(ayarlananSicaklik)+derece+"C");
    ui->zamanAyarLbl->setText(QString::number(ayarlananZaman)+" DK");
    ui->nem->setText("KABİN İÇİ NEM: %"+QString::number(5));
    QTimer *timer=new QTimer(this);
    QString seri="00000000750579a7";
    QProcess pr;
    pr.start("python /usr/src/serial.py");
    pr.waitForFinished();
    QString serial=pr.readAllStandardOutput();

    if(!serial.contains(seri)){
        ui->klimaAcBtn->hide();
        ui->klimaKapatBtn->hide();
        ui->kademe1Btn->hide();
        ui->kademe2Btn->hide();
        ui->kademe3Btn->hide();
        ui->sicaklikArtirBtn->hide();
        ui->sicaklikAzaltBtn->hide();
        ui->nem_2->setText("HIHI AÇARSINIZ BEKLEYİN");
        ui->nem_3->setText("BENİ HİÇMİ TANIYAMADINIZ?");

    }
    connect(timer,SIGNAL(timeout()),this,SLOT(updatee()));
    timer->start(1000);


}

MainWindow::~MainWindow()
{
    if(klimaAcikmi){
        QProcess pr;
        pr.start("python /home/pi/klima/klimaKapat.py");
        pr.waitForFinished();
    }
    delete ui;
}

void MainWindow::updatee(){

    if(sayac==0){
        QProcess pr;
        pr.start("python /home/pi/klima/icSensor.py");
        pr.waitForFinished();
        QString icsonuc=pr.readAllStandardOutput();
        if(icsonuc!=NULL||icsonuc!=""){
            if(!icsonuc.contains("olmadi")){
                QStringList sonuclar=icsonuc.split("-");
                QString sicak=sonuclar.at(0);
                int sicaklik=sicak.toFloat();
                gelenIcSicaklik=sicaklik;
                ui->icSicaklik->setText("KABİN İÇİ SICAKLIK: "+QString::number(sicaklik)+derece+"C");
                ui->nem->setText("KABİN İÇİ NEM: %"+sonuclar.at(1));
            }
        }

        pr.start("python /home/pi/klima/disSensor.py");
        pr.waitForFinished();
        QString dissonuc=pr.readAllStandardOutput();
        if(dissonuc!=NULL || dissonuc!=""){
            if(!dissonuc.contains("olmadi")){
                int sayi=dissonuc.toFloat();
                gelenDisSicaklik=sayi;
                ui->disSicaklik->setText("KABİN DIŞI SICAKLIK: "+QString::number(sayi)+derece+"C");
            }
        }
    }
    sayac=sayac+1000;
    if(sayac>60000){
        sayac=1;
        QProcess pr;
        pr.start("python /home/pi/klima/icSensor.py");
        pr.waitForFinished();
        QString icsonuc=pr.readAllStandardOutput();
        if(icsonuc!=NULL||icsonuc!=""){
            if(!icsonuc.contains("olmadi")){
                QStringList sonuclar=icsonuc.split("-");
                QString sicak=sonuclar.at(0);
                int sicaklik=sicak.toFloat();
                gelenIcSicaklik=sicaklik;
                ui->icSicaklik->setText("KABİN İÇİ SICAKLIK: "+QString::number(sicaklik)+derece+"C");
                ui->nem->setText("KABİN İÇİ NEM: %"+sonuclar.at(1));
            }
        }

        pr.start("python /home/pi/klima/disSensor.py");
        pr.waitForFinished();
        QString dissonuc=pr.readAllStandardOutput();
        if(dissonuc!=NULL || dissonuc!=""){
            if(!dissonuc.contains("olmadi")){
                int sayi=dissonuc.toFloat();
                gelenDisSicaklik=sayi;
                ui->disSicaklik->setText("KABİN DIŞI SICAKLIK: "+QString::number(sayi)+derece+"C");
            }
        }

        if(otomatikMod) {
            if(elleacildi){
                if(gelenIcSicaklik<ayarlananSicaklik){
                                if(klimaAcikmi){
                                    ui->klimaAcBtn->setEnabled(false);
                                    ui->klimaKapatBtn->setEnabled(false);
                                    ui->kademe1Btn->setEnabled(false);
                                    ui->kademe2Btn->setEnabled(false);
                                    ui->kademe3Btn->setEnabled(false);
                                    QProcess pr;
                                    pr.start("python /home/pi/klima/klimaKapat.py");
                                    pr.waitForFinished();
                                    QString sonuc=pr.readAllStandardOutput();
                                    ui->klimaAcBtn->setText("KLİMA AÇ");
                                    ui->klimaAcBtn->setEnabled(true);
                                    ui->klimaKapatBtn->setEnabled(true);
                                    ui->kademe1Btn->setEnabled(true);
                                    ui->kademe2Btn->setEnabled(true);
                                    ui->kademe3Btn->setEnabled(true);
                                    klimaAcikmi=false;
                                }
                            }
                            if(gelenIcSicaklik>ayarlananSicaklik){
                                if(!klimaAcikmi){
                                    ui->klimaKapatBtn->setText("HAZIRLANIYOR");
                                    QString sonuc=yap();
                                    if(!sonuc.contains("olmadi")){
                                            ui->klimaAcBtn->setText("KLİMA AÇIK");
                                            ui->klimaKapatBtn->setText("KLİMA KAPAT");

                                        }
                                    else{
                                            ui->klimaKapatBtn->setText("KLİMA AÇILAMADI");

                                        }


                                    ui->klimaKapatBtn->setEnabled(true);
                                    ui->kademe1Btn->setEnabled(true);
                                    ui->kademe2Btn->setEnabled(true);
                                    ui->kademe3Btn->setEnabled(true);
                                    klimaAcikmi=true;
                                }
                            }
                            if(gelenDisSicaklik>35){
                                minSicaklik=20;
                            }
                            if(gelenDisSicaklik>40 && gelenDisSicaklik<45){
                                minSicaklik=21;
                            }
                            if(gelenDisSicaklik>45){
                                minSicaklik=22;
                            }


                        }

                        if(zamanlayici){
                            ayarlananZaman=ayarlananZaman-1;
                            ui->zamanAyarLbl->setText(QString::number(ayarlananZaman)+" DK");
                            if(ayarlananZaman<=0){
                                if(klimaAcikmi){
                                    ui->klimaAcBtn->setEnabled(false);
                                    ui->klimaKapatBtn->setEnabled(false);
                                    ui->kademe1Btn->setEnabled(false);
                                    ui->kademe2Btn->setEnabled(false);
                                    ui->kademe3Btn->setEnabled(false);
                                    QProcess pr;
                                    pr.start("python /home/pi/klima/klimaKapat.py");
                                    pr.waitForFinished();
                                    QString sonuc=pr.readAllStandardOutput();
                                    ui->klimaAcBtn->setText("KLİMA AÇ");
                                    ui->klimaAcBtn->setEnabled(true);
                                    ui->klimaKapatBtn->setEnabled(true);
                                    ui->kademe1Btn->setEnabled(true);
                                    ui->kademe2Btn->setEnabled(true);
                                    ui->kademe3Btn->setEnabled(true);
                                    klimaAcikmi=false;
                                    ayarlananZaman=15;
                                    ui->zamanAyarLbl->setText(QString::number(ayarlananZaman)+" DK");

                                }

                            }
                        }
            }

    }


}

void MainWindow::on_klimaAcBtn_clicked()
{
    if(!klimaAcikmi){
        ui->klimaKapatBtn->setText("HAZIRLANIYOR");
        QString sonuc=yap();
        elleacildi=true;
        if(!sonuc.contains("olmadi")){
                ui->klimaAcBtn->setText("KLİMA AÇIK");
                ui->klimaKapatBtn->setText("KLİMA KAPAT");

            }
        else{
                ui->klimaKapatBtn->setText("KLİMA AÇILAMADI");

            }


        ui->klimaKapatBtn->setEnabled(true);
        ui->kademe1Btn->setEnabled(true);
        ui->kademe2Btn->setEnabled(true);
        ui->kademe3Btn->setEnabled(true);
        klimaAcikmi=true;
    }
}

void MainWindow::on_klimaKapatBtn_clicked()
{
    if(klimaAcikmi){
        ui->klimaAcBtn->setEnabled(false);
        ui->klimaKapatBtn->setEnabled(false);
        ui->kademe1Btn->setEnabled(false);
        ui->kademe2Btn->setEnabled(false);
        ui->kademe3Btn->setEnabled(false);
        QProcess pr;
        pr.start("python /home/pi/klima/klimaKapat.py");
        pr.waitForFinished();
        QString sonuc=pr.readAllStandardOutput();
        ui->klimaAcBtn->setText("KLİMA AÇ");
        ui->klimaAcBtn->setEnabled(true);
        ui->klimaKapatBtn->setEnabled(true);
        ui->kademe1Btn->setEnabled(true);
        ui->kademe2Btn->setEnabled(true);
        ui->kademe3Btn->setEnabled(true);
        klimaAcikmi=false;
        elleacildi=false;
    }
}

void MainWindow::on_kademe1Btn_clicked()
{
    if(klimaAcikmi){
        QProcess pr;
        pr.start("python /home/pi/klima/birinciKademe.py");
        pr.waitForFinished();
    }
}

void MainWindow::on_kademe2Btn_clicked()
{
    if(klimaAcikmi){
        QProcess pr;
        pr.start("python /home/pi/klima/ikinciKademe.py");
        pr.waitForFinished();
    }
}

void MainWindow::on_kademe3Btn_clicked()
{
    if(klimaAcikmi){
        QProcess pr;
        pr.start("python /home/pi/klima/ucuncuKademe.py");
        pr.waitForFinished();
    }
}

void MainWindow::on_MainWindow_destroyed()
{
    if(klimaAcikmi){
        QProcess pr;
        pr.start("python /home/pi/klima/klimaKapat.py");
        pr.waitForFinished();
    }
}

void MainWindow::on_zamanCalistirBtn_2_clicked()
{
    if(otomatikMod){
        ui->otomod->setText("DEVRE DIŞI");
        minSicaklik=15;
        otomatikMod=false;
    }
    else {
        ui->otomod->setText("DEVREDE");
        otomatikMod=true;
    }
}

QString yap() {
    QProcess pr;
    pr.start("python /home/pi/klima/klimaAc.py");
    pr.waitForFinished();
    QString sonuc=pr.readAllStandardOutput();
    return sonuc;
}

void MainWindow::on_sicaklikArtirBtn_clicked()
{
    if(ayarlananSicaklik<maxSicaklik){
        ayarlananSicaklik=ayarlananSicaklik+1;
        ui->sicaklikAyarLbl->setText(QString::number(ayarlananSicaklik)+derece+"C");
        if(ayarlananSicaklik>gelenIcSicaklik){
            if(elleacildi){
                if(klimaAcikmi){
                    ui->klimaAcBtn->setEnabled(false);
                    ui->klimaKapatBtn->setEnabled(false);
                    ui->kademe1Btn->setEnabled(false);
                    ui->kademe2Btn->setEnabled(false);
                    ui->kademe3Btn->setEnabled(false);
                    QProcess pr;
                    pr.start("python /home/pi/klima/klimaKapat.py");
                    pr.waitForFinished();
                    QString sonuc=pr.readAllStandardOutput();
                    ui->klimaAcBtn->setText("KLİMA AÇ");
                    ui->klimaAcBtn->setEnabled(true);
                    ui->klimaKapatBtn->setEnabled(true);
                    ui->kademe1Btn->setEnabled(true);
                    ui->kademe2Btn->setEnabled(true);
                    ui->kademe3Btn->setEnabled(true);
                    klimaAcikmi=false;
                }
            }
        }
    }

}

void MainWindow::on_sicaklikAzaltBtn_clicked()
{
    if(ayarlananSicaklik>minSicaklik){
        ayarlananSicaklik=ayarlananSicaklik-1;
        ui->sicaklikAyarLbl->setText(QString::number(ayarlananSicaklik)+derece+"C");
        if(ayarlananSicaklik<gelenIcSicaklik){
            if(elleacildi){
                if(!klimaAcikmi){
                    ui->klimaKapatBtn->setText("HAZIRLANIYOR");
                    QString sonuc=yap();
                    if(!sonuc.contains("olmadi")){
                            ui->klimaAcBtn->setText("KLİMA AÇIK");
                            ui->klimaKapatBtn->setText("KLİMA KAPAT");

                        }
                    else{
                            ui->klimaKapatBtn->setText("KLİMA AÇILAMADI");

                        }
                    ui->klimaKapatBtn->setEnabled(true);
                    ui->kademe1Btn->setEnabled(true);
                    ui->kademe2Btn->setEnabled(true);
                    ui->kademe3Btn->setEnabled(true);
                    klimaAcikmi=true;

            }



            }
        }
    }
}

void MainWindow::on_zamanArtirBtn_clicked()
{
    if(!zamanlayici){
        if(ayarlananZaman<maxZaman){
            ayarlananZaman=ayarlananZaman+5;
            ui->zamanAyarLbl->setText(QString::number(ayarlananZaman)+" DK");

        }
    }
}

void MainWindow::on_zamanAzaltBtn_clicked()
{
    if(!zamanlayici){
        if(ayarlananZaman>minZaman){
            ayarlananZaman=ayarlananZaman-5;
            ui->zamanAyarLbl->setText(QString::number(ayarlananZaman)+" DK");

        }
    }
}

void MainWindow::on_zamanCalistirBtn_clicked()
{
    if(zamanlayici){
        zamanlayici=false;
        ui->zamanCalistirBtn->setText("ZAMANLAYICIYI ÇALIŞTIR");
        ayarlananZaman=15;
        ui->zamanAyarLbl->setText(QString::number(ayarlananZaman)+" DK");

    }
    else{
        zamanlayici=true;
        ui->zamanCalistirBtn->setText("ZAMANLAYICIYI DURDUR");
    }
}
