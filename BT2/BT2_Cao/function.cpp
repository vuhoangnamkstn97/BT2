#include "cauthu.h"
#include "function.h"
#include <QFile>
#include <QTextStream>
#include "mutual_data.h"

bool comparePlayersHeight(Players a, Players b)
{
    if (a.getHeight() != b.getHeight() )
        return a.getHeight() > b.getHeight();
}
bool comparePlayersHeight2(Players a, Players b)
{
    if (a.getHeight() != b.getHeight() )
        return a.getHeight() < b.getHeight();
}
bool comparePlayersWeight(Players a, Players b)
{
    if (a.getWeight() != b.getWeight() )
        return a.getWeight() > b.getWeight();
}
bool comparePlayersWeight2(Players a, Players b)
{
    if (a.getWeight() != b.getWeight() )
        return a.getWeight() < b.getWeight();
}
bool comparePlayersOld(Players a, Players b)
{
    if (a.getDateofbirth().year() != b.getDateofbirth().year() )
        return a.getDateofbirth().year() < b.getDateofbirth().year();
}
bool comparePlayersYoung(Players a, Players b)
{
    if (a.getDateofbirth().year() != b.getDateofbirth().year() )
        return a.getDateofbirth().year() > b.getDateofbirth().year();
    else
    {
        if (a.getDateofbirth().month() != b.getDateofbirth().month() )
            return a.getDateofbirth().month() > b.getDateofbirth().month();
        else
        {
            if (a.getDateofbirth().day() != b.getDateofbirth().day() )
                return a.getDateofbirth().day() > b.getDateofbirth().day();
        }
    }
}
bool comparePlayersName(Players a, Players b)
{
    if (a.getName() != b.getName() )
        return a.getName() > b.getName();
}
bool comparePlayersName2(Players a, Players b)
{
    if (a.getName() != b.getName() )
        return a.getName() < b.getName();

}
void Writeplayerdata()
{

       QFile file("C:/Users/ASUS/Desktop/C++_tutorial/BT2/file.csv");
       file.open(QIODevice::WriteOnly | QIODevice::Text);
       // Write data to file
       QTextStream stream(&file);
       stream << "full_name" << "," << "ID" << "," << "natinality" << "," << "day" <<","<< "month" <<","<< " year" << "," << "height" << ","<< "weight" << ","<< "position"<< "," << "club"<< "," << "\n";
       for( int i = 1; i < Playerlist.size(); i++)
       {
           stream << Playerlist.at(i).getName() <<  "," << Playerlist.at(i).getID() << "," << Playerlist.at(i).getNationality() << "," << Playerlist.at(i).getDateofbirth().day() << "," << Playerlist.at(i).getDateofbirth().month() << "," << Playerlist.at(i).getDateofbirth().year() << ","  << Playerlist.at(i).getHeight() << "," << Playerlist.at(i).getWeight()<< "," << Playerlist.at(i).getPosition()<< "," << Playerlist.at(i).getClub() << "\n";
       }
       int number = Playerlist.size();
       file.resize(file.pos());
       file.close();
}
