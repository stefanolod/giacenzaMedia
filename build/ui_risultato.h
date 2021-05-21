/********************************************************************************
** Form generated from reading UI file 'risultato.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RISULTATO_H
#define UI_RISULTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_risultato
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *saldo_text;
    QPlainTextEdit *giacenza_text;

    void setupUi(QDialog *risultato)
    {
        if (risultato->objectName().isEmpty())
            risultato->setObjectName(QString::fromUtf8("risultato"));
        risultato->resize(186, 78);
        widget = new QWidget(risultato);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 171, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        saldo_text = new QPlainTextEdit(widget);
        saldo_text->setObjectName(QString::fromUtf8("saldo_text"));
        saldo_text->setReadOnly(true);

        verticalLayout->addWidget(saldo_text);

        giacenza_text = new QPlainTextEdit(widget);
        giacenza_text->setObjectName(QString::fromUtf8("giacenza_text"));
        giacenza_text->setReadOnly(true);

        verticalLayout->addWidget(giacenza_text);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(risultato);

        QMetaObject::connectSlotsByName(risultato);
    } // setupUi

    void retranslateUi(QDialog *risultato)
    {
        risultato->setWindowTitle(QCoreApplication::translate("risultato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("risultato", "Saldo", nullptr));
        label_2->setText(QCoreApplication::translate("risultato", "Giacenza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class risultato: public Ui_risultato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RISULTATO_H
