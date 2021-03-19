#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settingWidgets();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::settingWidgets()
{
    QWidget* central = new QWidget(this);
    //central->resize(1000, 500);
    ui->verticalLayout->addWidget(central);
    this->resize(500, 300);

    grid = new QGridLayout(central);

    showEnterNumber = new QLabel(this);
    showEnterNumber->setText("0");
    showEnterNumber->setFixedHeight(50);
    grid->addWidget(showEnterNumber, 1, 0, 1, -1, Qt::AlignRight);
    showEnterNumber->setStyleSheet("background-color: #DCDCDC; font-size: 30px;");

    _memory = new QLabel(this);
    _memory->setFixedHeight(30);
    _memory->setText("0");
    grid->addWidget(_memory, 0, 0, 1, -1, Qt::AlignRight);
    _memory->setStyleSheet("background-color: #DCDCDC; font-size: 20px;");


    _vectorOfButtons.resize(24);
    _vectorOfButtons.shrink_to_fit();

    buttonPercent = new QPushButton("%", this);
    buttonClearAll = new QPushButton("ClearAll", this);;
    buttonClear = new QPushButton("Clear", this);
    buttonBackSpace = new QPushButton("<-", this);
    buttonFlipNum = new QPushButton("1/X", this);
    buttonSquare = new QPushButton("square", this);
    buttonRot = new QPushButton("x2", this);
    buttonDivision = new QPushButton("/", this);
    button7 = new QPushButton("7", this);
    button8 = new QPushButton("8", this);
    button9 = new QPushButton("9", this);
    buttonMult = new QPushButton("*", this);
    button4 = new QPushButton("4", this);
    button5 = new QPushButton("5", this);
    button6 = new QPushButton("6", this);
    buttonMinus = new QPushButton("-", this);
    button1 = new QPushButton("1", this);
    button2 = new QPushButton("2", this);
    button3 = new QPushButton("3", this);
    buttonPlus =new QPushButton("+", this);
    buttonChangeSign = new QPushButton("+/-", this);
    button0 = new QPushButton("0", this);
    buttonPoint = new QPushButton(".", this);
    buttonResult = new QPushButton("=", this);


    _vectorOfButtons =
    {
        button1,
        button2,
        button3,
        button4,
        button5,
        button6,
        button7,
        button8,
        button9,
        button0,
        buttonPlus,
        buttonPercent,
        buttonClearAll,
        buttonClear,
        buttonBackSpace,
        buttonFlipNum,
        buttonSquare,
        buttonRot,
        buttonDivision,
        buttonMult,
        buttonMinus,
        buttonChangeSign,
        buttonPoint,
        buttonResult
    };

    grid->addWidget(buttonPercent, 2, 0);
    grid->addWidget(buttonClearAll, 2, 1);
    grid->addWidget(buttonClear, 2, 2);
    grid->addWidget(buttonBackSpace, 2, 3);
    grid->addWidget(buttonFlipNum, 3, 0);
    grid->addWidget(buttonSquare, 3, 1);
    grid->addWidget(buttonRot, 3, 2);
    grid->addWidget(buttonDivision, 3, 3);
    grid->addWidget(button7, 4, 0);
    grid->addWidget(button8, 4, 1);
    grid->addWidget(button9, 4, 2);
    grid->addWidget(buttonMult, 4, 3);
    grid->addWidget(button4, 5, 0);
    grid->addWidget(button5, 5, 1);
    grid->addWidget(button6, 5, 2);
    grid->addWidget(buttonMinus, 5, 3);
    grid->addWidget(button1, 6, 0);
    grid->addWidget(button2, 6, 1);
    grid->addWidget(button3, 6, 2);
    grid->addWidget(buttonPlus, 6, 3);
    grid->addWidget(buttonChangeSign, 7, 0);
    grid->addWidget(button0, 7, 1);
    grid->addWidget(buttonPoint, 7, 2);
    grid->addWidget(buttonResult, 7, 3);

    connect(button0, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("0"));
        _memory->setText(_memory->text() + QString("0"));
    });

    connect(button1, &QPushButton::clicked, this, [&](){
        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("1"));
        _memory->setText(_memory->text() + QString("1"));
    });
    connect(button2, &QPushButton::clicked, this, [&](){
        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("2"));
        _memory->setText(_memory->text() + QString("2"));
    });
    connect(button3, &QPushButton::clicked, this, [&](){
        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("3"));
        _memory->setText(_memory->text() + QString("3"));
    });
    connect(button4, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();

        }

        showEnterNumber->setText(showEnterNumber->text() + QString("4"));
        _memory->setText(_memory->text() + QString("4"));
    });
    connect(button5, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("5"));
        _memory->setText(_memory->text() + QString("5"));
    });
    connect(button6, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
          {
                  showEnterNumber->clear();
                  _memory->clear();
          }

        showEnterNumber->setText(showEnterNumber->text() + QString("6"));
        _memory->setText(_memory->text() + QString("6"));
    });
    connect(button7, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("7"));
        _memory->setText(_memory->text() + QString("7"));
    });
    connect(button8, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("8"));
        _memory->setText(_memory->text() + QString("8"));
    });
    connect(button9, &QPushButton::clicked, this, [&](){

        if(showEnterNumber->text() == "0")
        {
                showEnterNumber->clear();
                _memory->clear();
        }

        showEnterNumber->setText(showEnterNumber->text() + QString("9"));
        _memory->setText(_memory->text() + QString("9"));
    });

    connect(buttonPoint, &QPushButton::clicked, this, [&](){

        showEnterNumber->setText(showEnterNumber->text() + QString("."));
    });

    connect(buttonClearAll, &QPushButton::clicked, this, [&](){

        showEnterNumber->clear();
        showEnterNumber->setText("0");

        _memory->clear();
        _memory->setText("0");
    });
    connect(buttonClear, &QPushButton::clicked, this, [&](){

        showEnterNumber->clear();
        showEnterNumber->setText("0");

        _memory->clear();
        _memory->setText("0");
    });
    connect(buttonBackSpace, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        currentString.chop(1);
        showEnterNumber->setText(currentString);
        _memory->setText(currentString);

        if(showEnterNumber->text() == "")
        {
               showEnterNumber->setText("0");
               _memory->setText("0");
        }
    });

    connect(buttonPlus, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "+";
        showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("+"));

    });

    connect(buttonMinus, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "-";
        showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("-"));

    });

    connect(buttonDivision, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "/";
        showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("/"));

    });

    connect(buttonMult, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "*";
        showEnterNumber->clear();
        _memory->setText(_memory->text() + QString("*"));

    });

    connect(buttonFlipNum, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "1/";
        showEnterNumber->clear();
        showEnterNumber->setText(QString::number(1/_leftValue));

    });


    connect(buttonSquare, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "Square";
        showEnterNumber->clear();
        showEnterNumber->setText(QString::number(sqrt(_leftValue)));

    });

    connect(buttonChangeSign, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        showEnterNumber->clear();
        showEnterNumber->setText(QString::number(-_leftValue));
        _memory->clear();
        _memory->setText(QString::number(-_leftValue));

    });

    connect(buttonRot, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _leftValue = currentString.toDouble();
        _sign = "Rot";
        showEnterNumber->clear();
        showEnterNumber->setText(QString::number(_leftValue * _leftValue));
        _memory->setText(QString::number(_leftValue * _leftValue));

    });

    connect(buttonResult, &QPushButton::clicked, this, [&](){

        QString currentString = showEnterNumber->text();
        _rightValue = currentString.toDouble();

        if(_sign == "+")
        {
            double result = _leftValue + _rightValue;
            showEnterNumber->clear();
            showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else if(_sign == "-")
        {
            double result = _leftValue - _rightValue;
            showEnterNumber->clear();
            showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else if(_sign == "*")
        {
            double result = _leftValue * _rightValue;
            showEnterNumber->clear();
            showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else if(_sign == "/")
        {
            double result = _leftValue / _rightValue;
            showEnterNumber->clear();
            showEnterNumber->setText(QString::number(result));
            _memory->setText(QString::number(result));
        }
        else
        {
            showEnterNumber->setText("Error");

        }

    });

    for (auto &element: _vectorOfButtons)
    {
        element->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        element->setStyleSheet("background-color: #DCDCDC; font-size: 25px;");

    }


}


