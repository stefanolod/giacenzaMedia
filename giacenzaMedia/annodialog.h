#ifndef ANNODIALOG_H
#define ANNODIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include <QObject>

namespace Ui {
class annoDialog;
}

class annoDialog : public QDialog{
    Q_OBJECT

public:
    explicit annoDialog(QWidget *parent = nullptr);
    ~annoDialog();

private slots:
    void on_ok_button_pressed();

signals:
    void setArgPass(int anno, int n_intestatari);   

private:
    Ui::annoDialog *ui;
};

#endif // ANNODIALOG_H
