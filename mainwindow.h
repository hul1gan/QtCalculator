#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <cmath>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;

    QVector <QPushButton*> _vectorOfButtons;

    QGridLayout *grid = nullptr;

    QLabel* showEnterNumber = nullptr;
    QLabel* _memory = nullptr;

    QPushButton* buttonPercent = nullptr;
    QPushButton* buttonClearAll = nullptr;
    QPushButton* buttonClear = nullptr;
    QPushButton* buttonBackSpace = nullptr;
    QPushButton* buttonFlipNum = nullptr;
    QPushButton* buttonSquare = nullptr;
    QPushButton* buttonRot = nullptr;
    QPushButton* buttonDivision = nullptr;
    QPushButton* button7 = nullptr;
    QPushButton* button8 = nullptr;
    QPushButton* button9 = nullptr;
    QPushButton* buttonMult = nullptr;
    QPushButton* button4 = nullptr;
    QPushButton* button5 = nullptr;
    QPushButton* button6 = nullptr;
    QPushButton* buttonMinus = nullptr;
    QPushButton* button1 = nullptr;
    QPushButton* button2 = nullptr;
    QPushButton* button3 = nullptr;
    QPushButton* buttonPlus = nullptr;
    QPushButton* buttonChangeSign = nullptr;
    QPushButton* button0 = nullptr;
    QPushButton* buttonPoint = nullptr;
    QPushButton* buttonResult = nullptr;

    void settingWidgets();


    double _rightValue = 0;
    double _leftValue = 0;
    QString _sign = "";
};
#endif // MAINWINDOW_H
