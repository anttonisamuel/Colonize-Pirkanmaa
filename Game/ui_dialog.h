/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QFormLayout *formLayout;
    QLabel *p1Label;
    QLineEdit *p1Name;
    QLabel *p2Label;
    QLineEdit *p2Name;
    QLabel *p3Label;
    QLabel *p4Label;
    QLineEdit *p3Name;
    QLineEdit *p4Name;
    QHBoxLayout *horizontalLayout;
    QPushButton *playButton;
    QPushButton *loreButton;
    QPushButton *closeButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        infoLabel = new QLabel(Dialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(infoLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        p1Label = new QLabel(Dialog);
        p1Label->setObjectName(QString::fromUtf8("p1Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, p1Label);

        p1Name = new QLineEdit(Dialog);
        p1Name->setObjectName(QString::fromUtf8("p1Name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, p1Name);

        p2Label = new QLabel(Dialog);
        p2Label->setObjectName(QString::fromUtf8("p2Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, p2Label);

        p2Name = new QLineEdit(Dialog);
        p2Name->setObjectName(QString::fromUtf8("p2Name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, p2Name);

        p3Label = new QLabel(Dialog);
        p3Label->setObjectName(QString::fromUtf8("p3Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, p3Label);

        p4Label = new QLabel(Dialog);
        p4Label->setObjectName(QString::fromUtf8("p4Label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, p4Label);

        p3Name = new QLineEdit(Dialog);
        p3Name->setObjectName(QString::fromUtf8("p3Name"));

        formLayout->setWidget(2, QFormLayout::FieldRole, p3Name);

        p4Name = new QLineEdit(Dialog);
        p4Name->setObjectName(QString::fromUtf8("p4Name"));

        formLayout->setWidget(3, QFormLayout::FieldRole, p4Name);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        playButton = new QPushButton(Dialog);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout->addWidget(playButton);

        loreButton = new QPushButton(Dialog);
        loreButton->setObjectName(QString::fromUtf8("loreButton"));

        horizontalLayout->addWidget(loreButton);

        closeButton = new QPushButton(Dialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        infoLabel->setText(QApplication::translate("Dialog", "Enter player names. Blank field means no player.", nullptr));
        p1Label->setText(QApplication::translate("Dialog", "Player 1:", nullptr));
        p2Label->setText(QApplication::translate("Dialog", "Player 2:", nullptr));
        p3Label->setText(QApplication::translate("Dialog", "Player 3:", nullptr));
        p4Label->setText(QApplication::translate("Dialog", "Player 4:", nullptr));
        playButton->setText(QApplication::translate("Dialog", "Play", nullptr));
        loreButton->setText(QApplication::translate("Dialog", "Lore", nullptr));
        closeButton->setText(QApplication::translate("Dialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
