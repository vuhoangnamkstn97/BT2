#ifndef WIDGET2_H
#define WIDGET2_H

#include <QtWidgets>
class Widget2 : public QWidget
{
    Q_OBJECT
public :
    Widget2( QString, QString );

private:
    QLineEdit  *Line1;
    QLineEdit   *Line2;
    QPushButton *back;
};

#endif // WIDGET2_H
