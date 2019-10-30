/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *klimaAcBtn;
    QPushButton *klimaKapatBtn;
    QPushButton *kademe1Btn;
    QPushButton *kademe2Btn;
    QPushButton *kademe3Btn;
    QLabel *logo;
    QLabel *icSicaklik;
    QLabel *disSicaklik;
    QLabel *nem;
    QLabel *nem_2;
    QLabel *nem_3;
    QPushButton *sicaklikArtirBtn;
    QPushButton *sicaklikAzaltBtn;
    QPushButton *zamanArtirBtn;
    QPushButton *zamanAzaltBtn;
    QLabel *sicaklikAyarLbl;
    QLabel *zamanAyarLbl;
    QPushButton *zamanCalistirBtn;
    QPushButton *zamanCalistirBtn_2;
    QLabel *otomod;
    QLabel *logo_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        klimaAcBtn = new QPushButton(centralWidget);
        klimaAcBtn->setObjectName(QStringLiteral("klimaAcBtn"));
        klimaAcBtn->setGeometry(QRect(10, 10, 351, 91));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        klimaAcBtn->setFont(font);
        klimaKapatBtn = new QPushButton(centralWidget);
        klimaKapatBtn->setObjectName(QStringLiteral("klimaKapatBtn"));
        klimaKapatBtn->setGeometry(QRect(10, 120, 351, 91));
        klimaKapatBtn->setFont(font);
        kademe1Btn = new QPushButton(centralWidget);
        kademe1Btn->setObjectName(QStringLiteral("kademe1Btn"));
        kademe1Btn->setGeometry(QRect(10, 240, 351, 91));
        kademe1Btn->setFont(font);
        kademe2Btn = new QPushButton(centralWidget);
        kademe2Btn->setObjectName(QStringLiteral("kademe2Btn"));
        kademe2Btn->setGeometry(QRect(10, 360, 351, 91));
        kademe2Btn->setFont(font);
        kademe3Btn = new QPushButton(centralWidget);
        kademe3Btn->setObjectName(QStringLiteral("kademe3Btn"));
        kademe3Btn->setGeometry(QRect(10, 480, 351, 91));
        kademe3Btn->setFont(font);
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(400, 10, 221, 121));
        logo->setPixmap(QPixmap(QString::fromUtf8("../asclogo.gif")));
        icSicaklik = new QLabel(centralWidget);
        icSicaklik->setObjectName(QStringLiteral("icSicaklik"));
        icSicaklik->setGeometry(QRect(680, 70, 321, 51));
        sizePolicy.setHeightForWidth(icSicaklik->sizePolicy().hasHeightForWidth());
        icSicaklik->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        icSicaklik->setFont(font1);
        disSicaklik = new QLabel(centralWidget);
        disSicaklik->setObjectName(QStringLiteral("disSicaklik"));
        disSicaklik->setGeometry(QRect(680, 10, 321, 51));
        sizePolicy.setHeightForWidth(disSicaklik->sizePolicy().hasHeightForWidth());
        disSicaklik->setSizePolicy(sizePolicy);
        disSicaklik->setFont(font1);
        nem = new QLabel(centralWidget);
        nem->setObjectName(QStringLiteral("nem"));
        nem->setGeometry(QRect(680, 130, 321, 51));
        sizePolicy.setHeightForWidth(nem->sizePolicy().hasHeightForWidth());
        nem->setSizePolicy(sizePolicy);
        nem->setFont(font1);
        nem_2 = new QLabel(centralWidget);
        nem_2->setObjectName(QStringLiteral("nem_2"));
        nem_2->setGeometry(QRect(680, 190, 321, 61));
        sizePolicy.setHeightForWidth(nem_2->sizePolicy().hasHeightForWidth());
        nem_2->setSizePolicy(sizePolicy);
        nem_2->setFont(font1);
        nem_2->setAlignment(Qt::AlignCenter);
        nem_3 = new QLabel(centralWidget);
        nem_3->setObjectName(QStringLiteral("nem_3"));
        nem_3->setGeometry(QRect(680, 400, 321, 61));
        sizePolicy.setHeightForWidth(nem_3->sizePolicy().hasHeightForWidth());
        nem_3->setSizePolicy(sizePolicy);
        nem_3->setFont(font1);
        nem_3->setAlignment(Qt::AlignCenter);
        sicaklikArtirBtn = new QPushButton(centralWidget);
        sicaklikArtirBtn->setObjectName(QStringLiteral("sicaklikArtirBtn"));
        sicaklikArtirBtn->setGeometry(QRect(660, 240, 101, 71));
        QFont font2;
        font2.setPointSize(60);
        font2.setBold(true);
        font2.setWeight(75);
        sicaklikArtirBtn->setFont(font2);
        sicaklikArtirBtn->setLayoutDirection(Qt::RightToLeft);
        sicaklikAzaltBtn = new QPushButton(centralWidget);
        sicaklikAzaltBtn->setObjectName(QStringLiteral("sicaklikAzaltBtn"));
        sicaklikAzaltBtn->setGeometry(QRect(910, 240, 101, 71));
        sicaklikAzaltBtn->setFont(font2);
        zamanArtirBtn = new QPushButton(centralWidget);
        zamanArtirBtn->setObjectName(QStringLiteral("zamanArtirBtn"));
        zamanArtirBtn->setGeometry(QRect(660, 450, 101, 61));
        zamanArtirBtn->setFont(font2);
        zamanAzaltBtn = new QPushButton(centralWidget);
        zamanAzaltBtn->setObjectName(QStringLiteral("zamanAzaltBtn"));
        zamanAzaltBtn->setGeometry(QRect(910, 450, 101, 61));
        zamanAzaltBtn->setFont(font2);
        sicaklikAyarLbl = new QLabel(centralWidget);
        sicaklikAyarLbl->setObjectName(QStringLiteral("sicaklikAyarLbl"));
        sicaklikAyarLbl->setGeometry(QRect(776, 240, 121, 71));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        sicaklikAyarLbl->setFont(font3);
        sicaklikAyarLbl->setAlignment(Qt::AlignCenter);
        zamanAyarLbl = new QLabel(centralWidget);
        zamanAyarLbl->setObjectName(QStringLiteral("zamanAyarLbl"));
        zamanAyarLbl->setGeometry(QRect(780, 450, 121, 61));
        zamanAyarLbl->setFont(font3);
        zamanAyarLbl->setAlignment(Qt::AlignCenter);
        zamanCalistirBtn = new QPushButton(centralWidget);
        zamanCalistirBtn->setObjectName(QStringLiteral("zamanCalistirBtn"));
        zamanCalistirBtn->setGeometry(QRect(660, 520, 351, 61));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        zamanCalistirBtn->setFont(font4);
        zamanCalistirBtn_2 = new QPushButton(centralWidget);
        zamanCalistirBtn_2->setObjectName(QStringLiteral("zamanCalistirBtn_2"));
        zamanCalistirBtn_2->setGeometry(QRect(660, 320, 171, 61));
        zamanCalistirBtn_2->setFont(font4);
        otomod = new QLabel(centralWidget);
        otomod->setObjectName(QStringLiteral("otomod"));
        otomod->setGeometry(QRect(830, 320, 181, 61));
        sizePolicy.setHeightForWidth(otomod->sizePolicy().hasHeightForWidth());
        otomod->setSizePolicy(sizePolicy);
        otomod->setFont(font1);
        otomod->setScaledContents(true);
        otomod->setAlignment(Qt::AlignCenter);
        logo_2 = new QLabel(centralWidget);
        logo_2->setObjectName(QStringLiteral("logo_2"));
        logo_2->setGeometry(QRect(390, 410, 241, 171));
        logo_2->setPixmap(QPixmap(QString::fromUtf8("../tcdd.png")));
        logo_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ASC VAGON VE B\304\260L\304\260\305\236\304\260M", Q_NULLPTR));
        klimaAcBtn->setText(QApplication::translate("MainWindow", "KL\304\260MA A\303\207", Q_NULLPTR));
        klimaKapatBtn->setText(QApplication::translate("MainWindow", "KL\304\260MA KAPAT", Q_NULLPTR));
        kademe1Btn->setText(QApplication::translate("MainWindow", "1. KADEME", Q_NULLPTR));
        kademe2Btn->setText(QApplication::translate("MainWindow", "2. KADEME", Q_NULLPTR));
        kademe3Btn->setText(QApplication::translate("MainWindow", "3. KADEME", Q_NULLPTR));
        logo->setText(QString());
        icSicaklik->setText(QApplication::translate("MainWindow", "KAB\304\260N \304\260\303\207\304\260 SICAKLIK: ", Q_NULLPTR));
        disSicaklik->setText(QApplication::translate("MainWindow", "KAB\304\260N DI\305\236I SICAKLIK:", Q_NULLPTR));
        nem->setText(QApplication::translate("MainWindow", "KAB\304\260N \304\260\303\207\304\260 NEM:", Q_NULLPTR));
        nem_2->setText(QApplication::translate("MainWindow", "SICAKLIK AYARI", Q_NULLPTR));
        nem_3->setText(QApplication::translate("MainWindow", "ZAMANLAYICI", Q_NULLPTR));
        sicaklikArtirBtn->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        sicaklikAzaltBtn->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        zamanArtirBtn->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        zamanAzaltBtn->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        sicaklikAyarLbl->setText(QApplication::translate("MainWindow", "20", Q_NULLPTR));
        zamanAyarLbl->setText(QApplication::translate("MainWindow", "120 DK", Q_NULLPTR));
        zamanCalistirBtn->setText(QApplication::translate("MainWindow", "ZAMANLAYICIYI \303\207ALI\305\236TIR", Q_NULLPTR));
        zamanCalistirBtn_2->setText(QApplication::translate("MainWindow", "OTOMAT\304\260K MOD", Q_NULLPTR));
        otomod->setText(QApplication::translate("MainWindow", "DEVREDE", Q_NULLPTR));
        logo_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
