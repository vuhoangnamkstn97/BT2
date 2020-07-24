#include "widget2.h"
#include <QString>

Widget2::Widget2(QString s1, QString s2)
{

    this->Line1 = new QLineEdit(s1);
    this->Line2 = new QLineEdit(s2);
    this->back = new QPushButton("Back");


    this->Line1->setReadOnly(true);
    this->Line2->setReadOnly(true);



    QVBoxLayout *lopChinh = new QVBoxLayout;
    lopChinh ->addWidget(Line1);
    lopChinh ->addWidget(Line2);
    lopChinh ->addWidget(back);
    resize(450, 600);
    setLayout(lopChinh);

    connect(back,SIGNAL(clicked()),qApp,SLOT(quit()));
}

