#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "giacenza.h"
#include "annodialog.h"
#include "ui_annodialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setArgPass(int anno, int n_intestatari);

private slots:

    void on_continua_button_pressed();

    void on_mesi_spinbox_valueChanged(int arg1);

    void on_calcola_button_pressed();

    void on_actionNuovo_triggered();

    void on_lista_comboBox_highlighted(const QString &arg1);

    void on_modifica_button_pressed();

private:
    Ui::MainWindow *ui;
    Giacenza g;
};
#endif // MAINWINDOW_H
