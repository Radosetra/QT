#include "llproject.h"
#include "ui_llproject.h"

llproject::llproject(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::llproject)
{
    ui->setupUi(this);
    userDB = QSqlDatabase::addDatabase("QSQLITE");
    userDB.setDatabaseName("/run/media/to/784CF7C94CF78064/L1/NouveauDossier/bosy/Qt project/DB/login.db");

    userDB.open();


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

    if(!userDB.isOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery usr_qry;

        if(usr_qry.exec("select * from users where usernames='"+username+"' and passwords='"+password+"'")){
            int count=0;
            while(usr_qry.next()){
                count++;
            }
            if(count>=1){
                QMessageBox::warning(this,"Succes", "Nom d'utilisateur et mot de passe corrects");
                          hide();
                          Affichage = new affichage();
                          Affichage->show();
            }
            if(count<1)
                QMessageBox::warning(this,"Error", "Verifiez votre nom d'utilisateur et votre mot de passe");
        }




}

