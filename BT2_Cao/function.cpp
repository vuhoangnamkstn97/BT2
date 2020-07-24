#include "cauthu.h"
#include "function.h"
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
