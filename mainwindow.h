#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <iostream>

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
    enum operations
    {
        PLUS = 0,
        MINUS,
        MULT,
        DIV,
        UNKNOWN
    };


    Ui::MainWindow* _ui;

    QVector <QPushButton*> _vectorOfButtons;

    QGridLayout* _grid = nullptr;

    QLabel* _showEnterNumber = nullptr;
    QLabel* _memory = nullptr;

    QPushButton* _buttonPercent = nullptr;
    QPushButton* _buttonClearAll = nullptr;
    QPushButton* _buttonClear = nullptr;
    QPushButton* _buttonBackSpace = nullptr;
    QPushButton* _buttonFlipNum = nullptr;
    QPushButton* _buttonSquare = nullptr;
    QPushButton* _buttonRot = nullptr;
    QPushButton* _buttonDivision = nullptr;
    QPushButton* _button7 = nullptr;
    QPushButton* _button8 = nullptr;
    QPushButton* _button9 = nullptr;
    QPushButton* _buttonMult = nullptr;
    QPushButton* _button4 = nullptr;
    QPushButton* _button5 = nullptr;
    QPushButton* _button6 = nullptr;
    QPushButton* _buttonMinus = nullptr;
    QPushButton* _button1 = nullptr;
    QPushButton* _button2 = nullptr;
    QPushButton* _button3 = nullptr;
    QPushButton* _buttonPlus = nullptr;
    QPushButton* _buttonChangeSign = nullptr;
    QPushButton* _button0 = nullptr;
    QPushButton* _buttonPoint = nullptr;
    QPushButton* _buttonResult = nullptr;

    void _settingWidgets();
    void _computing();


    double _rightValue = 0;
    double _leftValue = 0;
    QString _sign = "";

    bool _clickSign = true;
    bool _flagPoint = true;
    bool _flagWriteOnce = true;
    bool _flagResult = true;
    bool _persentIsOn = false;

    int _counterEnteredNum = 0;

    void _enterNumbersInLabel(QString number);
    void _swap(double &first, double &second);

    double _result = 0;


    operations _currentOperator = operations::UNKNOWN;

};
#endif // MAINWINDOW_H
