#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updatee();

    void on_klimaAcBtn_clicked();

    void on_klimaKapatBtn_clicked();

    void on_kademe1Btn_clicked();

    void on_kademe2Btn_clicked();

    void on_kademe3Btn_clicked();

    void on_MainWindow_destroyed();

    void on_zamanCalistirBtn_2_clicked();

    void on_sicaklikArtirBtn_clicked();

    void on_sicaklikAzaltBtn_clicked();

    void on_zamanArtirBtn_clicked();

    void on_zamanAzaltBtn_clicked();

    void on_zamanCalistirBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
