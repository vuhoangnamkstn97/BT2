#include "widget3.h"
#include "ui_widget3.h"

widget3::widget3(QWidget *parent ) :
    QWidget(parent),
    ui_widget(new Ui::widget3)
{
        ui_widget->setupUi(this);
        ui_widget->lineEdit->setText("asdasda");

}

widget3::~widget3()
{
    delete ui_widget;
}

widget3::widget3( QString text ) :
    ui_widget(new Ui::widget3)
{
        ui_widget->setupUi(this);
        ui_widget->lineEdit->setText(text);

}

void widget3::on_textEdit_textChanged()
{

}
