#include "help.h"
#include "ui_help.h"
#include <fstream>
#include <iostream>

Help::Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
}

Help::~Help()
{
    delete ui;
}
