#include"doibong.h"
#include <QString>

Clubs::Clubs()
{
    this->city = "NUll";
    this->coach = "Null";
    this->name = "Null";
    this->quantity = 0;
}
Clubs::Clubs(QString name,QString city ,QString coach,unsigned int quantity, std::vector<class Players> players)
{
    this->name = name;
    this->city = city;
    this->coach = coach;
    this->quantity = quantity;
    this->players = players;
}
void Clubs::setName(QString name)
{
    this->name = name;
}
void Clubs::setCity(QString city)
{
    this->city = city;
}
void Clubs::setCoach(QString coach)
{
    this->coach = coach;
}
void Clubs::setStadium(QString stadium)
{
    this->stadium = stadium;
}
void Clubs::setQuantity(unsigned int quantity)
{
    this->quantity = quantity;
}
void Clubs::setPlayers(std::vector<Players> players)
{
    this->players = players;
}
void Clubs::setWins(int wins)
{
    this->wins = wins;
}
void Clubs::setDraws(int draws)
{
    this->draws = draws;
}
void Clubs::setLoses(int loses)
{
    this->loses = loses;
}

QString Clubs::getName()
{
    return this->name;
}
QString Clubs::getCoach()
{
    return this->coach;
}
QString Clubs::getCity()
{
    return this->city;
}
QString Clubs::getStadium()
{
    return this->stadium;
}
int Clubs::getWins()
{
    return this->wins;
}
int Clubs::getDraws()
{
    return this->draws;
}
int Clubs::getLoses()
{
    return this->loses;
}
int Clubs::getPoints()
{
    return this->wins*3+this->draws;
}
unsigned int Clubs::getQuantity()
{
    return this->quantity;
}
std::vector<Players> Clubs::getPlayers()
{
    return this->players;
}
