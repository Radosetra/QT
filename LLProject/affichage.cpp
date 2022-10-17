#include "affichage.h"
#include "ui_affichage.h"

affichage::affichage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::affichage)
{
    ui->setupUi(this);
}

affichage::~affichage()
{
    delete ui;
}
