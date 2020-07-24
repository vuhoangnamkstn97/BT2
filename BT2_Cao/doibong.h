#ifndef DOIBONG_H
#define DOIBONG_H
#include <QString>
#include <vector>
#include "cauthu.h"
class Clubs
{
private :
    QString name;
    QString city;
    QString coach;
    QString stadium;
    int wins;
    int loses;
    int draws;
    int points;
    int quantity;
    std::vector<Players> players;
public :
    Clubs();
    Clubs(QString,QString,QString,unsigned int, std::vector<class Players>);
    void setName(QString);
    void setCity(QString);
    void setCoach(QString);
    void setStadium(QString);
    void setWins(int);
    void setLoses(int);
    void setDraws(int);

    void setQuantity(unsigned int);
    void setPlayers(std::vector<class Players> );
    void addPlayers(class Players p);
    // code getdata
    QString getName();
    QString getCity();
    QString getCoach();
    unsigned int getQuantity();
    QString getStadium();
    int getWins();
    int getLoses();
    int getDraws();
    int getPoints();
    std::vector<class Players> getPlayers();
};
#endif // DOIBONG_H
