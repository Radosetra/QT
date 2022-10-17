#include "llproject.h"
#include "ui_llproject.h"

llproject::llproject(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::llproject)
{
    ui->setupUi(this);
    QPixmap pix(":/images/Turtle.png");
        int wt = ui->label_pic->width();
        int ht = ui->label_pic->height();

    ui->label_pic->setPixmap(pix.scaled(wt,ht,Qt::KeepAspectRatio));
}

llproject::~llproject()
{
    delete ui;
}


void llproject::on_pushButton_clicked()
{
    QString username = ui->inp_username->text();
    QString password = ui->inp_password->text();

    if(username == "To" && password == "qwerty"){
        hide();
        Affichage = new affichage();
        Affichage->show();
    }
}

