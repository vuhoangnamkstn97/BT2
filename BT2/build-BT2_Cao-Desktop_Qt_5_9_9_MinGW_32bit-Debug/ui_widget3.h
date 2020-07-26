/********************************************************************************
** Form generated from reading UI file 'widget3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET3_H
#define UI_WIDGET3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget3
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_13;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_16;
    QLineEdit *name;
    QLineEdit *position;
    QLineEdit *dob;
    QLineEdit *height;
    QLineEdit *weight;
    QLineEdit *club;
    QLineEdit *id;
    QLineEdit *nation;
    QPushButton *pushButton;

    void setupUi(QWidget *widget3)
    {
        if (widget3->objectName().isEmpty())
            widget3->setObjectName(QStringLiteral("widget3"));
        widget3->resize(638, 514);
        verticalLayoutWidget = new QWidget(widget3);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 611, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_13 = new QLineEdit(verticalLayoutWidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_13);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, lineEdit);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_3);

        lineEdit_18 = new QLineEdit(verticalLayoutWidget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setCursorPosition(24);
        lineEdit_18->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, lineEdit_18);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, lineEdit_7);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, lineEdit_9);

        lineEdit_11 = new QLineEdit(verticalLayoutWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, lineEdit_11);

        lineEdit_14 = new QLineEdit(verticalLayoutWidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, lineEdit_14);

        lineEdit_16 = new QLineEdit(verticalLayoutWidget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::LabelRole, lineEdit_16);

        name = new QLineEdit(verticalLayoutWidget);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        position = new QLineEdit(verticalLayoutWidget);
        position->setObjectName(QStringLiteral("position"));

        formLayout->setWidget(1, QFormLayout::FieldRole, position);

        dob = new QLineEdit(verticalLayoutWidget);
        dob->setObjectName(QStringLiteral("dob"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dob);

        height = new QLineEdit(verticalLayoutWidget);
        height->setObjectName(QStringLiteral("height"));

        formLayout->setWidget(3, QFormLayout::FieldRole, height);

        weight = new QLineEdit(verticalLayoutWidget);
        weight->setObjectName(QStringLiteral("weight"));

        formLayout->setWidget(4, QFormLayout::FieldRole, weight);

        club = new QLineEdit(verticalLayoutWidget);
        club->setObjectName(QStringLiteral("club"));

        formLayout->setWidget(5, QFormLayout::FieldRole, club);

        id = new QLineEdit(verticalLayoutWidget);
        id->setObjectName(QStringLiteral("id"));

        formLayout->setWidget(6, QFormLayout::FieldRole, id);

        nation = new QLineEdit(verticalLayoutWidget);
        nation->setObjectName(QStringLiteral("nation"));

        formLayout->setWidget(7, QFormLayout::FieldRole, nation);


        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(widget3);

        QMetaObject::connectSlotsByName(widget3);
    } // setupUi

    void retranslateUi(QWidget *widget3)
    {
        widget3->setWindowTitle(QApplication::translate("widget3", "Form", Q_NULLPTR));
        lineEdit_13->setText(QApplication::translate("widget3", "Add Player Form", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("widget3", "Name", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("widget3", "Position", Q_NULLPTR));
        lineEdit_18->setText(QApplication::translate("widget3", "Date of birth (dd/mm/yy)", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("widget3", "Height", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("widget3", "Weight", Q_NULLPTR));
        lineEdit_11->setText(QApplication::translate("widget3", "Club", Q_NULLPTR));
        lineEdit_14->setText(QApplication::translate("widget3", "ID", Q_NULLPTR));
        lineEdit_16->setText(QApplication::translate("widget3", "Natinality", Q_NULLPTR));
        pushButton->setText(QApplication::translate("widget3", "Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widget3: public Ui_widget3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET3_H
