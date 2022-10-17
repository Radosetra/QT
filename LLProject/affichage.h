#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QMainWindow>

namespace Ui {
class affichage;
}

class affichage : public QMainWindow
{
    Q_OBJECT

public:
    explicit affichage(QWidget *parent = nullptr);
    ~affichage();

private:
    Ui::affichage *ui;
};

#endif // AFFICHAGE_H
