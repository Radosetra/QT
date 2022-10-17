#ifndef LLPROJECT_H
#define LLPROJECT_H

#include <QMainWindow>
#include <QPixmap>
#include "affichage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class llproject; }
QT_END_NAMESPACE

class llproject : public QMainWindow
{
    Q_OBJECT

public:
    llproject(QWidget *parent = nullptr);
    ~llproject();

private slots:
    void on_pushButton_clicked();

private:
    Ui::llproject *ui;
    affichage *Affichage;
};
#endif // LLPROJECT_H
