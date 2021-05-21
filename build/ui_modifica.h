/********************************************************************************
** Form generated from reading UI file 'modifica.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICA_H
#define UI_MODIFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modifica
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *giorno_lbl;
    QSpinBox *giorni_spinbox;
    QLabel *mese_lbl;
    QSpinBox *mesi_spinbox;
    QComboBox *n_modifica_comboBox;
    QPushButton *modifica_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *importo_lbl;
    QLineEdit *importo_text;

    void setupUi(QDialog *Modifica)
    {
        if (Modifica->objectName().isEmpty())
            Modifica->setObjectName(QString::fromUtf8("Modifica"));
        Modifica->resize(290, 107);
        layoutWidget = new QWidget(Modifica);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 10, 179, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        giorno_lbl = new QLabel(layoutWidget);
        giorno_lbl->setObjectName(QString::fromUtf8("giorno_lbl"));

        horizontalLayout->addWidget(giorno_lbl);

        giorni_spinbox = new QSpinBox(layoutWidget);
        giorni_spinbox->setObjectName(QString::fromUtf8("giorni_spinbox"));
        giorni_spinbox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        giorni_spinbox->setKeyboardTracking(true);
        giorni_spinbox->setMinimum(1);
        giorni_spinbox->setMaximum(31);

        horizontalLayout->addWidget(giorni_spinbox);

        mese_lbl = new QLabel(layoutWidget);
        mese_lbl->setObjectName(QString::fromUtf8("mese_lbl"));

        horizontalLayout->addWidget(mese_lbl);

        mesi_spinbox = new QSpinBox(layoutWidget);
        mesi_spinbox->setObjectName(QString::fromUtf8("mesi_spinbox"));
        mesi_spinbox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        mesi_spinbox->setMinimum(1);
        mesi_spinbox->setMaximum(12);

        horizontalLayout->addWidget(mesi_spinbox);

        n_modifica_comboBox = new QComboBox(Modifica);
        n_modifica_comboBox->setObjectName(QString::fromUtf8("n_modifica_comboBox"));
        n_modifica_comboBox->setGeometry(QRect(10, 10, 79, 26));
        modifica_button = new QPushButton(Modifica);
        modifica_button->setObjectName(QString::fromUtf8("modifica_button"));
        modifica_button->setGeometry(QRect(209, 70, 71, 26));
        widget = new QWidget(Modifica);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 70, 184, 28));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        importo_lbl = new QLabel(widget);
        importo_lbl->setObjectName(QString::fromUtf8("importo_lbl"));

        horizontalLayout_2->addWidget(importo_lbl);

        importo_text = new QLineEdit(widget);
        importo_text->setObjectName(QString::fromUtf8("importo_text"));

        horizontalLayout_2->addWidget(importo_text);


        retranslateUi(Modifica);

        QMetaObject::connectSlotsByName(Modifica);
    } // setupUi

    void retranslateUi(QDialog *Modifica)
    {
        Modifica->setWindowTitle(QCoreApplication::translate("Modifica", "Dialog", nullptr));
        giorno_lbl->setText(QCoreApplication::translate("Modifica", "Giorno", nullptr));
        mese_lbl->setText(QCoreApplication::translate("Modifica", "Mese", nullptr));
        modifica_button->setText(QCoreApplication::translate("Modifica", "Modifica", nullptr));
        importo_lbl->setText(QCoreApplication::translate("Modifica", "Importo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modifica: public Ui_Modifica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICA_H
