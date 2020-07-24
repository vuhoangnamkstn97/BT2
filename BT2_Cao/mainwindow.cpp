#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget3.h"
#include "mutual_data.h"
#include "cauthu.h"
#include "function.h"
#include "doibong.h"

#include <QFile>
#include <stdlib.h>
#include <time.h>
#include <QDate>
#include <bits/stdc++.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(openNewWindow()));


    srand (time(NULL));
    QFile file("C:/Users/NAMVU/Desktop/CTDL&GT/Stats.csv");
    file.open(QIODevice::ReadOnly);
    // number player which is reading
    int i = 0;

//     ui->lineEdit->setText(QString::number(Player_temp.getWeight()));
//    ui->lineEdit->setText(Player_temp.getDateofbirth().toString("dd.MM.yyyy"));
    QByteArray line = file.readLine();
    while (!file.atEnd())
    {
        Players Player_temp;
        line = file.readLine();
        QString age = line.split(',').at(1);
        Player_temp.setName(line.split(',').at(0));
        Player_temp.setNationality(line.split(',').at(10));
        Player_temp.setPosition(line.split(',').at(5));
        Player_temp.setClub(line.split(',').at(6));
        Player_temp.setID(line.split(',').at(8)+line.split(',').at(9));

        int height = rand() % 50 + 150;
        Player_temp.setHeight(height);
        int weight =  rand() % 35 + 65;
        Player_temp.setWeight(weight);
        int day = rand()%30 + 1;
        int month = rand()%11+1;
        int year =2020- age.toInt();
        QDate DOB(year,month,day);
        Player_temp.setDateofbirth(DOB);
        Playerlist.push_back(Player_temp);
    }
    file.close();
    file.setFileName("C:/Users/NAMVU/Desktop/CTDL&GT/team.csv");
    file.open(QIODevice::ReadOnly);
    line = file.readLine();
    while (!file.atEnd())
    {
        Clubs club_temp;
        line = file.readLine();
            club_temp.setName(line.split(',').at(1));
            club_temp.setCity(line.split(',').at(3));
            club_temp.setStadium(line.split(',').at(7));
            club_temp.setWins(line.split(',').at(8));
            club_temp.setDraws(line.split(',').at(11));
            club_temp.setLoses(line.split(',').at(14));
            for( int i = 1; i < Playerlist.size(); i++)
            {

                if ( Playerlist.at(i).getClub() == club_temp.getName())
                    club_temp.setPlayers();
            }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{

}
void MainWindow::openNewWindow()
{
   widGet3 = new widget3("Alo"); // Be sure to destroy your window somewhere
   widGet3->show();
   this->close();
   // ...
}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(index == 0)
    {
        showPlayersList();
    }

}



void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    if (column == 6 && row ==0)
    {
            std::sort(Playerlist.begin(),Playerlist.end(),comparePlayersHeight);
            showPlayersList();

    }
    if (column == 0 && row ==0)
    {
            std::sort(Playerlist.begin(),Playerlist.end(),comparePlayersName);
            showPlayersList();

    }
    if (column == 1 && row ==0)
    {
            std::sort(Playerlist.begin(),Playerlist.end(),comparePlayersYoung);
            showPlayersList();

    }
}
void MainWindow::showPlayersList()
{
    for( int i = 1; i < Playerlist.size(); i++)
    {

        this->ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        this->ui->tableWidget->setItem(i-1,0, new QTableWidgetItem(Playerlist.at(i).getName()));
        this->ui->tableWidget->setItem(i-1,1, new QTableWidgetItem(Playerlist.at(i).getDateofbirth().toString("dd.MM.yyyy")));
        this->ui->tableWidget->setItem(i-1,2, new QTableWidgetItem(Playerlist.at(i).getPosition()));
        this->ui->tableWidget->setItem(i-1,3, new QTableWidgetItem(Playerlist.at(i).getNationality()));
        this->ui->tableWidget->setItem(i-1,4, new QTableWidgetItem(Playerlist.at(i).getClub()));
        this->ui->tableWidget->setItem(i-1,5, new QTableWidgetItem(QString::number(Playerlist.at(i).getWeight())));
        this->ui->tableWidget->setItem(i-1,6, new QTableWidgetItem(QString::number(Playerlist.at(i).getHeight())));
        this->ui->tableWidget->setItem(i-1,7, new QTableWidgetItem(Playerlist.at(i).getID()));
    }
}


