#include "trandau.h"

Matches::Matches()
{
    this->stadium = "Null";
    this->result = "Null";
    this->matchDay = "Null";
    this->homeTeam = "Null";
    this->homeScore = 0;
    this->awayTeam = "Null";
    this->awayScore = 0;
}

Matches::Matches(QString stadium ,QString result,QString matchday,QString hometeam,unsigned int homescore, unsigned int awayscore, QString awayteam)
{
    this->stadium = stadium;
    this->result = result;
    this->matchDay = matchday;
    this->homeTeam = hometeam;
    this->homeScore = homescore;
    this->awayTeam =  awayteam;
    this->awayScore = awayscore;
}
QString Matches::getStadium()
{
    return this->stadium;
}
QString Matches::getResult()
{
    return this->result;
}
QString Matches::getMatchday()
{
    return  this->matchDay;
}
QString Matches::getHometeam()
{
    return this->homeTeam;
}
unsigned int Matches::getHomescore()
{
    return this->homeScore;
}
unsigned int Matches::getAwayscore()
{
    return this->awayScore;
}
QString Matches::getAwayteam()
{
    return this->awayTeam;
}
void Matches::setStadium(QString stadium)
{
     this->stadium = stadium;
}
void Matches::setResult(QString result)
{
     this->result = result;
}
void Matches::setMatchday(QString matchday)
{
     this->matchDay = matchday;
}
void Matches::setHometeam(QString hometeam)
{
     this->homeTeam = hometeam;
}
void Matches::setHomescore(unsigned int homescore)
{
    this->homeScore = homescore;
}
void Matches::setAwayteam(QString awayteam)
{
    this->awayTeam = awayteam;
}
void Matches::setAwayscore(unsigned int awayscore)
{
    this->awayScore = awayscore;
}
