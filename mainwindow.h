#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegExpValidator>
#include <QSplashScreen>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <math.h>
#define M_PI 3.14
#define M_QU 20

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString convertToIEEE32(float &p_R);
    QString convertToIEEE64(double &p_R);

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_lineEdit_67_textChanged(const QString &arg1);

    void on_lineEdit_68_textChanged(const QString &arg1);

    void on_lineEdit_69_textChanged(const QString &arg1);

    void on_pushButton_21_clicked();


    void on_pushButton_22_clicked();

    void on_lineEdit_70_textChanged(const QString &arg1);

    void on_pushButton_23_clicked();


    void on_lineEdit_71_textChanged(const QString &arg1);


    void on_lineEdit_72_textChanged(const QString &arg1);

    void on_lineEdit_73_textChanged(const QString &arg1);

    void on_lineEdit_75_textChanged(const QString &arg1);

    void on_lineEdit_77_textChanged(const QString &arg1);

    void on_pushButton_24_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
