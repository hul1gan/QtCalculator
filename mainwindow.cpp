#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , _ui(new Ui::MainWindow)
{
    _ui->setupUi(this);
    _settingWidgets();
    _computing();
}

MainWindow::~MainWindow()
{
    delete _ui;
}

void MainWindow::_settingWidgets()
{
    QWidget* central = new QWidget(this);
    //central->resize(1000, 500);
    _ui->verticalLayout->addWidget(central);
    this->resize(500, 300);

    _grid = new QGridLayout(central);

    _showEnterNumber = new QLabel(this);
    _showEnterNumber->setText("0");
    _showEnterNumber->setFixedHeight(50);
    _grid->addWidget(_showEnterNumber, 1, 0, 1, -1, Qt::AlignRight);
    _showEnterNumber->setStyleSheet("background-color: #DCDCDC; font-size: 30px;");

    _memory = new QLabel(this);
    _memory->setFixedHeight(30);
    _memory->setText("0");
    _grid->addWidget(_memory, 0, 0, 1, -1, Qt::AlignRight);
    _memory->setStyleSheet("background-color: #DCDCDC; font-size: 20px;");


    _vectorOfButtons.resize(24);
    _vectorOfButtons.shrink_to_fit();

    _buttonPercent = new QPushButton("%", this);
    _buttonClearAll = new QPushButton("ClearAll", this);;
    _buttonClear = new QPushButton("Clear", this);
    _buttonBackSpace = new QPushButton("<-", this);
    _buttonFlipNum = new QPushButton("1/X", this);
    _buttonSquare = new QPushButton("square", this);
    _buttonRot = new QPushButton("x2", this);
    _buttonDivision = new QPushButton("/", this);
    _button7 = new QPushButton("7", this);
    _button8 = new QPushButton("8", this);
    _button9 = new QPushButton("9", this);
    _buttonMult = new QPushButton("*", this);
    _button4 = new QPushButton("4", this);
    _button5 = new QPushButton("5", this);
    _button6 = new QPushButton("6", this);
    _buttonMinus = new QPushButton("-", this);
    _button1 = new QPushButton("1", this);
    _button2 = new QPushButton("2", this);
    _button3 = new QPushButton("3", this);
    _buttonPlus =new QPushButton("+", this);
    _buttonChangeSign = new QPushButton("+/-", this);
    _button0 = new QPushButton("0", this);
    _buttonPoint = new QPushButton(".", this);
    _buttonResult = new QPushButton("=", this);


    _vectorOfButtons =
    {
        _button1,
        _button2,
        _button3,
        _button4,
        _button5,
        _button6,
        _button7,
        _button8,
        _button9,
        _button0,
        _buttonPlus,
        _buttonPercent,
        _buttonClearAll,
        _buttonClear,
        _buttonBackSpace,
        _buttonFlipNum,
        _buttonSquare,
        _buttonRot,
        _buttonDivision,
        _buttonMult,
        _buttonMinus,
        _buttonChangeSign,
        _buttonPoint,
        _buttonResult
    };

    _grid->addWidget(_buttonPercent, 2, 0);
    _grid->addWidget(_buttonClearAll, 2, 1);
    _grid->addWidget(_buttonClear, 2, 2);
    _grid->addWidget(_buttonBackSpace, 2, 3);
    _grid->addWidget(_buttonFlipNum, 3, 0);
    _grid->addWidget(_buttonSquare, 3, 1);
    _grid->addWidget(_buttonRot, 3, 2);
    _grid->addWidget(_buttonDivision, 3, 3);
    _grid->addWidget(_button7, 4, 0);
    _grid->addWidget(_button8, 4, 1);
    _grid->addWidget(_button9, 4, 2);
    _grid->addWidget(_buttonMult, 4, 3);
    _grid->addWidget(_button4, 5, 0);
    _grid->addWidget(_button5, 5, 1);
    _grid->addWidget(_button6, 5, 2);
    _grid->addWidget(_buttonMinus, 5, 3);
    _grid->addWidget(_button1, 6, 0);
    _grid->addWidget(_button2, 6, 1);
    _grid->addWidget(_button3, 6, 2);
    _grid->addWidget(_buttonPlus, 6, 3);
    _grid->addWidget(_buttonChangeSign, 7, 0);
    _grid->addWidget(_button0, 7, 1);
    _grid->addWidget(_buttonPoint, 7, 2);
    _grid->addWidget(_buttonResult, 7, 3);



    for (auto &element: _vectorOfButtons)
    {
        element->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        element->setStyleSheet("background-color: #DCDCDC; font-size: 25px;");

    }

}

void MainWindow::_computing()
{

    connect(_button0, &QPushButton::clicked, this, [&](){

        _enterNumbersInLabel("0");

    });

    connect(_button1, &QPushButton::clicked, this, [&](){

        _enterNumbersInLabel("1");
    });
    connect(_button2, &QPushButton::clicked, this, [&](){

        _enterNumbersInLabel("2");
    });
    connect(_button3, &QPushButton::clicked, this, [&](){

         _enterNumbersInLabel("3");
    });
    connect(_button4, &QPushButton::clicked, this, [&](){

        _enterNumbersInLabel("4");

    });
    connect(_button5, &QPushButton::clicked, this, [&](){

         _enterNumbersInLabel("5");
    });
    connect(_button6, &QPushButton::clicked, this, [&](){

         _enterNumbersInLabel("6");
    });
    connect(_button7, &QPushButton::clicked, this, [&](){

         _enterNumbersInLabel("7");
    });
    connect(_button8, &QPushButton::clicked, this, [&](){

         _enterNumbersInLabel("8");
    });
    connect(_button9, &QPushButton::clicked, this, [&](){

         _enterNumbersInLabel("9");
    });

    connect(_buttonPoint, &QPushButton::clicked, this, [&](){

        if(_flagPoint)
        {
        _showEnterNumber->setText(_showEnterNumber->text() + QString("."));
        _memory->setText(_showEnterNumber->text());
        _flagPoint = false;
        }
    });

    connect(_buttonClearAll, &QPushButton::clicked, this, [&](){

        _showEnterNumber->clear();
        _showEnterNumber->setText("0");

        _memory->clear();
        _memory->setText("0");

        _counterEnteredNum = 0;
        _flagPoint = true;

    });
    connect(_buttonClear, &QPushButton::clicked, this, [&](){

        _showEnterNumber->clear();
        _showEnterNumber->setText("0");

        _memory->clear();
        _memory->setText("0");

        _counterEnteredNum = 0;
        _flagPoint = true;
    });
    connect(_buttonBackSpace, &QPushButton::clicked, this, [&](){

        QString currentString = _showEnterNumber->text();
        currentString.chop(1);
        _showEnterNumber->setText(currentString);
        _memory->setText(currentString);

        if(_showEnterNumber->text() == "")
        {
               _showEnterNumber->setText("0");
               _memory->setText("0");
        }

        _counterEnteredNum--;
    });

    connect(_buttonPlus, &QPushButton::clicked, this, [&](){


        if(_clickSign)
        {
        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "+";
        _showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("+"));
        _clickSign =  false;
        _flagPoint = true;

        }
    });

    connect(_buttonMinus, &QPushButton::clicked, this, [&](){

        if(_clickSign)

        {
        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "-";
        _showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("-"));
        _clickSign =  false;
        _flagPoint = true;
        }
    });

    connect(_buttonDivision, &QPushButton::clicked, this, [&](){

        if(_clickSign)
        {
        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "/";
        _showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("/"));
        _clickSign =  false;
        _flagPoint = true;
       }
    });

    connect(_buttonMult, &QPushButton::clicked, this, [&](){

        if(_clickSign)
        {

        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "*";
        _showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("*"));
        _clickSign =  false;
        _flagPoint = true;
}
    });

    connect(_buttonFlipNum, &QPushButton::clicked, this, [&](){

        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "1/";
        _showEnterNumber->clear();
        _showEnterNumber->setText(QString::number(1/_leftValue));

    });


    connect(_buttonSquare, &QPushButton::clicked, this, [&](){

        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "Square";
        _showEnterNumber->clear();
        _showEnterNumber->setText(QString::number(sqrt(_leftValue)));

    });

    connect(_buttonChangeSign, &QPushButton::clicked, this, [&](){

        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _showEnterNumber->clear();
        _showEnterNumber->setText(QString::number(-_leftValue));
        _memory->clear();
        _memory->setText(QString::number(-_leftValue));

    });

    connect(_buttonRot, &QPushButton::clicked, this, [&](){

        QString currentString = _showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "Rot";
        _showEnterNumber->clear();
        _showEnterNumber->setText(QString::number(_leftValue * _leftValue));
        _memory->setText(QString::number(_leftValue * _leftValue));

    });

    connect(_buttonPercent, &QPushButton::clicked, this, [&](){

        _showEnterNumber->clear();
        _showEnterNumber->setText(_memory->text() + QString::number(_rightValue));
        _memory->setText(_memory->text() + QString::number(_rightValue));
        double current = _leftValue / 100;
        _rightValue = current * _rightValue;
        _sign = "Percent";

    });

    connect(_buttonResult, &QPushButton::clicked, this, [&](){

        QString currentString = _showEnterNumber->text();
        _rightValue = currentString.toDouble();
        _clickSign = true;

        if(_sign == "+" || "Percent")
        {
            _showEnterNumber->clear();
            _showEnterNumber->setText(QString::number(_leftValue + _rightValue));
            _memory->setText(QString::number(_leftValue + _rightValue));
        }
        else if(_sign == "-")
        {
            double result = _leftValue - _rightValue;
            _showEnterNumber->clear();
            _showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else if(_sign == "*")
        {
            double result = _leftValue * _rightValue;
            _showEnterNumber->clear();
            _showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else if(_sign == "/")
        {
            double result = _leftValue / _rightValue;
            _showEnterNumber->clear();
            _showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else
        {
            _showEnterNumber->setText("Error");

        }

    });

}

void MainWindow::_enterNumbersInLabel(QString number)
{
    if(_counterEnteredNum < 20)
    {
    if(_showEnterNumber->text() == "0")
    {
            _showEnterNumber->clear();
            _memory->clear();
            _clickSign = true;
    }
    else
    {
        _counterEnteredNum ++;
    }

    _showEnterNumber->setText(_showEnterNumber->text() + number);
    _memory->setText(_memory->text() + number);
}
}


