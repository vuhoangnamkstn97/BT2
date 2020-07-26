#ifndef TRANDAU_H
#define TRANDAU_H

#include <QString>
class Matches
{
private :
    QString matchDay;
    QString stadium;
    QString homeTeam;
    QString awayTeam;
    unsigned int homeScore;
    unsigned int awayScore;
    QString result;
public :
    Matches();
    Matches(QString,QString,QString,QString,unsigned int, unsigned int, QString);
    void setMatchday(QString);
    void setStadium(QString);
    void setHometeam(QString);
    void setAwayteam(QString);
    void setHomescore(unsigned int);
    void setAwayscore(unsigned int);
    void setResult(QString);
    // code getdata
    QString getMatchday();
    QString getStadium();
    QString getHometeam();
    QString getAwayteam();
    QString getResult();
    unsigned int getHomescore();
    unsigned int getAwayscore();
};
#endif // TRANDAU_H
