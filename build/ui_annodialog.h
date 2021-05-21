/********************************************************************************
** Form generated from reading UI file 'annodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNODIALOG_H
#define UI_ANNODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_annoDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *anno_spinbox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *intestatari_spinbox;
    QPushButton *ok_button;

    void setupUi(QDialog *annoDialog)
    {
        if (annoDialog->objectName().isEmpty())
            annoDialog->setObjectName(QString::fromUtf8("annoDialog"));
        annoDialog->resize(386, 69);
        widget = new QWidget(annoDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(13, 2, 281, 55));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        anno_spinbox = new QSpinBox(widget);
        anno_spinbox->setObjectName(QString::fromUtf8("anno_spinbox"));
        anno_spinbox->setAlignment(Qt::AlignCenter);
        anno_spinbox->setMinimum(1950);
        anno_spinbox->setMaximum(3000);

        verticalLayout->addWidget(anno_spinbox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        intestatari_spinbox = new QSpinBox(widget);
        intestatari_spinbox->setObjectName(QString::fromUtf8("intestatari_spinbox"));
        intestatari_spinbox->setAlignment(Qt::AlignCenter);
        intestatari_spinbox->setMinimum(1);
        intestatari_spinbox->setMaximum(10000000);
        intestatari_spinbox->setValue(1);

        verticalLayout_2->addWidget(intestatari_spinbox);


        horizontalLayout->addLayout(verticalLayout_2);

        ok_button = new QPushButton(annoDialog);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));
        ok_button->setGeometry(QRect(309, 10, 61, 31));

        retranslateUi(annoDialog);

        QMetaObject::connectSlotsByName(annoDialog);
    } // setupUi

    void retranslateUi(QDialog *annoDialog)
    {
        annoDialog->setWindowTitle(QCoreApplication::translate("annoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("annoDialog", "Anno di riferimento", nullptr));
        label_2->setText(QCoreApplication::translate("annoDialog", "n\302\260 intestatari", nullptr));
        ok_button->setText(QCoreApplication::translate("annoDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class annoDialog: public Ui_annoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNODIALOG_H
