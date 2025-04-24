#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGridLayout>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QGridLayout *gl;

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
