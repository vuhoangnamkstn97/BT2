#include "cauthu.h"
#include <vector>

Players::Players()
{
    this->height = 0;
    this->ID = "Null";
    this->name = "Null";
    this->position = "Null";
    this->natinality = "Null";
    this->weight = 0;
    this->dateOfbirth.setDate(0,0,0);
}
Players::Players(QString ID,QString Name,QString Nationality ,QDate DateofBirth, int Weight, int Height,QString Position,QString club)
{
    this->club = club;
    this->ID = ID;
    this->name = Name;
    this->natinality = Nationality ;
    this->dateOfbirth = DateofBirth ;
    this->weight = Weight ;
    this->height = Height;
    this->position = Position ;
}
QDate Players::getDateofbirth()
{
    return this->dateOfbirth;
}
QString Players::getClub()
{
    return this->club;
}
QString Players::getID()
{
    return this->ID;
}
QString Players::getName()
{
    return this->name;
}
QString Players::getNationality()
{
    return this->natinality;
}
QString Players::getPosition()
{
    return this->position;
}
 int Players::getWeight()
{
    return this->weight;
}
 int Players::getHeight()
{
    return this->height;
}
void Players::setDateofbirth(QDate DOB)
{
    this->dateOfbirth = DOB;
}
void Players::setHeight( int height)
{
    this->height = height;
}
void Players::setID(QString id)
{
    this->ID = id;
}
void Players::setName(QString name)
{
    this->name = name;
}
void Players::setNationality(QString nation)
{
    this->natinality = nation;
}
void Players::setPosition(QString pos)
{
    this->position = pos;
}
void Players::setWeight( int weight)
{
    this->weight = weight;
}
void Players::setClub(QString club)
{
    this->club = club;
}
