/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *timeSpinBox;
    QLabel *label_4;
    QComboBox *slopeCombo;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *weightSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *speedSpinBox;
    QPushButton *calculateButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *caloryValue;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 290, 481, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        timeSpinBox = new QDoubleSpinBox(layoutWidget);
        timeSpinBox->setObjectName("timeSpinBox");
        timeSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(timeSpinBox);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        slopeCombo = new QComboBox(layoutWidget);
        slopeCombo->addItem(QString());
        slopeCombo->addItem(QString());
        slopeCombo->addItem(QString());
        slopeCombo->addItem(QString());
        slopeCombo->setObjectName("slopeCombo");

        horizontalLayout->addWidget(slopeCombo);

        layoutWidget_2 = new QWidget(Widget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 380, 481, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        weightSpinBox = new QDoubleSpinBox(layoutWidget_2);
        weightSpinBox->setObjectName("weightSpinBox");
        weightSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(weightSpinBox);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        speedSpinBox = new QDoubleSpinBox(layoutWidget_2);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(speedSpinBox);

        calculateButton = new QPushButton(Widget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(650, 440, 111, 31));
        layoutWidget_3 = new QWidget(Widget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(190, 200, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        caloryValue = new QLabel(layoutWidget_3);
        caloryValue->setObjectName("caloryValue");

        horizontalLayout_3->addWidget(caloryValue);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Calory Calculator", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Time(h)", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Slope:", nullptr));
        slopeCombo->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));
        slopeCombo->setItemText(1, QCoreApplication::translate("Widget", "Level 1", nullptr));
        slopeCombo->setItemText(2, QCoreApplication::translate("Widget", "Level 2 ", nullptr));
        slopeCombo->setItemText(3, QCoreApplication::translate("Widget", "Level 3", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "Weight(Kg)", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Speed:", nullptr));
        calculateButton->setText(QCoreApplication::translate("Widget", "Calculate ", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Calory:", nullptr));
        caloryValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
