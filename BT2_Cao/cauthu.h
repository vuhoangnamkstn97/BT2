#ifndef CAUTHU_H
#define CAUTHU_H
#include <QString>
#include <QDate>
class Players
{
private :
    QString ID;
    QString name;
    QString natinality;
    QDate dateOfbirth;
     int height;
     int weight;
    QString position;
    QString club;
public :
    Players();
    Players(QString,QString,QString,QDate, int, int,QString,QString);
    void setClub(QString);
    void setID(QString);
    void setName(QString);
    void setNationality(QString);
    void setDateofbirth(QDate);
    void setHeight( int);
    void setWeight( int);
    void setPosition(QString);
    // code getdata
    QString getClub();
    QString getID();
    QString getName();
    QString getNationality();
    QDate getDateofbirth();
     int getHeight();
     int getWeight();
    QString getPosition();
};
#endif // CAUTHU_H
