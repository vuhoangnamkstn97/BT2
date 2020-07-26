#include "widget3.h"
#include "ui_widget3.h"
#include "mutual_data.h"
#include "cauthu.h"
widget3::widget3(QWidget *parent ) :
    QWidget(parent),
    ui_widget(new Ui::widget3)
{
        ui_widget->setupUi(this);

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

void widget3::on_pushButton_clicked()
{
    Players player_temp;
    QString str;
    player_temp.setName(ui_widget->name->text());
    player_temp.setPosition(ui_widget->position->text());
    player_temp.setClub(ui_widget->club->text());
    player_temp.setNationality(ui_widget->nation->text());
    player_temp.setID(ui_widget->id->text());
    player_temp.setHeight((ui_widget->height->text()).toInt());
    player_temp.setWeight((ui_widget->weight->text()).toInt());
    str = ui_widget->dob->text();
    int day = str.split('/').at(0).toInt();
    int month = str.split('/').at(1).toInt();
    int year = str.split('/').at(2).toInt();
    QDate DOB(year,month,day);
    player_temp.setDateofbirth(DOB);
    Playerlist.push_back(player_temp);
    this->close();
}
