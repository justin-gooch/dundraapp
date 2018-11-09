#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newCharacter = new Character();
    //newCharacter->connectUi(ui);




    connect(ui->d4Button, SIGNAL(clicked(bool)), this, SLOT(onD4Clicked()));
    connect(ui->d6Button, SIGNAL(clicked(bool)), this, SLOT(onD6Clicked()));
    connect(ui->d8Button, SIGNAL(clicked(bool)), this, SLOT(onD8Clicked()));
    connect(ui->d10Button, SIGNAL(clicked(bool)), this, SLOT(onD10Clicked()));
    connect(ui->d12Button, SIGNAL(clicked(bool)), this, SLOT(onD12Clicked()));
    connect(ui->d20Button, SIGNAL(clicked(bool)), this, SLOT(onD20Clicked()));
    connect(ui->d100Button, SIGNAL(clicked(bool)), this, SLOT(onD100Clicked()));
    connect(ui->saveCharacterButton, SIGNAL(clicked(bool)), this, SLOT(onSaveCharacterSelected()));
//    connect(ui->saveCharacterButton, SIGNAL(clicked(bool)), this, SLOT(onSaveCharacterSelected()));
//    connect(character, SIGNAL(setCharacterName("Hello world")), this, SLOT(onSaveCharacterSelected()));


}
int randomNumber(int diceSize)
{
    return rand() %diceSize;
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onD4Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(4)+1);
}

void MainWindow::onD6Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(6)+1);
}

void MainWindow::onD8Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(8)+1);
}

void MainWindow::onD10Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(10));
}

void MainWindow::onD12Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(12)+1);
}

void MainWindow::onD20Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(20)+1);
}

void MainWindow::onD100Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(10)*10);

}

void MainWindow::onNewCharacterSelected()
{

}

void MainWindow::onLoadCharacterSelected()
{

}

void MainWindow::onSaveCharacterSelected()
{
//    connect(character, SIGNAL(clicked(bool)), character, SLOT(onSaveCharacterSelected(setCharacterName(ui->characterNameLineEdit->text()))));
    newCharacter->setCharacterName(ui->characterNameLineEdit->text());


}

void MainWindow::onAboutSelected()
{

}


