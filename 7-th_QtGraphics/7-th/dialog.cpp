#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    gl = new QGridLayout;
}

Dialog::~Dialog()
{
    delete ui;
    delete gl;
}
