/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuovo;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *lista_comboBox;
    QLabel *mese_lbl;
    QSpinBox *giorni_spinbox;
    QLabel *giorno_lbl;
    QSpinBox *mesi_spinbox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *importo_lbl;
    QLineEdit *importo_text;
    QVBoxLayout *verticalLayout;
    QPushButton *continua_button;
    QPushButton *calcola_button;
    QPushButton *modifica_button;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(372, 128);
        actionNuovo = new QAction(MainWindow);
        actionNuovo->setObjectName(QString::fromUtf8("actionNuovo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 1, 356, 94));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lista_comboBox = new QComboBox(layoutWidget);
        lista_comboBox->setObjectName(QString::fromUtf8("lista_comboBox"));

        horizontalLayout->addWidget(lista_comboBox);

        mese_lbl = new QLabel(layoutWidget);
        mese_lbl->setObjectName(QString::fromUtf8("mese_lbl"));

        horizontalLayout->addWidget(mese_lbl);

        giorni_spinbox = new QSpinBox(layoutWidget);
        giorni_spinbox->setObjectName(QString::fromUtf8("giorni_spinbox"));
        giorni_spinbox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        giorni_spinbox->setKeyboardTracking(true);
        giorni_spinbox->setMinimum(1);
        giorni_spinbox->setMaximum(31);

        horizontalLayout->addWidget(giorni_spinbox);

        giorno_lbl = new QLabel(layoutWidget);
        giorno_lbl->setObjectName(QString::fromUtf8("giorno_lbl"));

        horizontalLayout->addWidget(giorno_lbl);

        mesi_spinbox = new QSpinBox(layoutWidget);
        mesi_spinbox->setObjectName(QString::fromUtf8("mesi_spinbox"));
        mesi_spinbox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        mesi_spinbox->setMinimum(1);
        mesi_spinbox->setMaximum(12);

        horizontalLayout->addWidget(mesi_spinbox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        importo_lbl = new QLabel(layoutWidget);
        importo_lbl->setObjectName(QString::fromUtf8("importo_lbl"));

        horizontalLayout_2->addWidget(importo_lbl);

        importo_text = new QLineEdit(layoutWidget);
        importo_text->setObjectName(QString::fromUtf8("importo_text"));

        horizontalLayout_2->addWidget(importo_text);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        continua_button = new QPushButton(layoutWidget);
        continua_button->setObjectName(QString::fromUtf8("continua_button"));

        verticalLayout->addWidget(continua_button);

        calcola_button = new QPushButton(layoutWidget);
        calcola_button->setObjectName(QString::fromUtf8("calcola_button"));

        verticalLayout->addWidget(calcola_button);

        modifica_button = new QPushButton(layoutWidget);
        modifica_button->setObjectName(QString::fromUtf8("modifica_button"));
        modifica_button->setMinimumSize(QSize(0, 26));
        modifica_button->setMaximumSize(QSize(16777215, 26));

        verticalLayout->addWidget(modifica_button);


        horizontalLayout_3->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNuovo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNuovo->setText(QCoreApplication::translate("MainWindow", "Nuovo", nullptr));
        mese_lbl->setText(QCoreApplication::translate("MainWindow", "Mese", nullptr));
        giorno_lbl->setText(QCoreApplication::translate("MainWindow", "Giorno", nullptr));
        importo_lbl->setText(QCoreApplication::translate("MainWindow", "Importo", nullptr));
        continua_button->setText(QCoreApplication::translate("MainWindow", "Continua", nullptr));
        calcola_button->setText(QCoreApplication::translate("MainWindow", "Calcola", nullptr));
        modifica_button->setText(QCoreApplication::translate("MainWindow", "Modifica", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
