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
    QFile file("C:/Users/ASUS/Desktop/C++_tutorial/BT2/file.csv");

    file.open(QIODevice::ReadOnly);
//     ui->lineEdit->setText(QString::number(Player_temp.getWeight()));
//    ui->lineEdit->setText(Player_temp.getDateofbirth().toString("dd.MM.yyyy"));
    QByteArray line ;
    while (!file.atEnd())
    {
        Players Player_temp;
        line = file.readLine();

        Player_temp.setName(line.split(',').at(0));
        //test code

        Player_temp.setNationality(line.split(',').at(2));
        Player_temp.setPosition(line.split(',').at(8));
        Player_temp.setClub(line.split(',').at(9));
        Player_temp.setID(line.split(',').at(1));

        int height = line.split(',').at(6).toInt();
        Player_temp.setHeight(height);
        int weight = line.split(',').at(7).toInt();
        Player_temp.setWeight(weight);


//        int day = str.split(QRegExp("\\s+"), QString::SkipEmptyParts).at(2).toInt();

//        int year = str.split(QRegExp("\\s+"), QString::SkipEmptyParts).at(3).toInt();
        int day = line.split(',').at(3).toInt();
        int month =line.split(',').at(4).toInt();
        int year =line.split(',').at(5).toInt();
        QDate DOB(year,month,day);
        Player_temp.setDateofbirth(DOB);
        Playerlist.push_back(Player_temp);
    }
    file.close();
    file.setFileName("C:/Users/ASUS/Desktop/C++_tutorial/BT2/teams.csv");
    file.open(QIODevice::ReadOnly);
    line = file.readLine();
    while (!file.atEnd())
    {
        Clubs club_temp;
        line = file.readLine();
        club_temp.setName(line.split(',').at(1));
        club_temp.setCity(line.split(',').at(6));
        club_temp.setStadium(line.split(',').at(7));
        club_temp.setCoach(line.split(',').at(0));
        club_temp.setWins(line.split(',').at(8).toInt());
        club_temp.setDraws(line.split(',').at(11).toInt());
        club_temp.setLoses(line.split(',').at(14).toInt());
        club_temp.getPoints();
//            for( int i = 1; i < Playerlist.size(); i++)
//            {

//                if ( Playerlist.at(i).getClub() == club_temp.getName())
//                    club_temp.setPlayers();
//            }
        Clublist.push_back(club_temp);
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

void MainWindow::on_comboBox_3_currentIndexChanged(int index)
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
        this->ui->tableWidget->setRowCount(0);
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
void MainWindow::showPlayersList(QString name)
{
    int number = 0;
    for( int i = 1; i < Playerlist.size(); i++)
    {
        if (Playerlist.at(i).getName().contains( name) )
        {
            number ++;
            this->ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            this->ui->tableWidget->setItem(number-1,0, new QTableWidgetItem(Playerlist.at(i).getName()));
            this->ui->tableWidget->setItem(number-1,1, new QTableWidgetItem(Playerlist.at(i).getDateofbirth().toString("dd.MM.yyyy")));
            this->ui->tableWidget->setItem(number-1,2, new QTableWidgetItem(Playerlist.at(i).getPosition()));
            this->ui->tableWidget->setItem(number-1,3, new QTableWidgetItem(Playerlist.at(i).getNationality()));
            this->ui->tableWidget->setItem(number-1,4, new QTableWidgetItem(Playerlist.at(i).getClub()));
            this->ui->tableWidget->setItem(number-1,5, new QTableWidgetItem(QString::number(Playerlist.at(i).getWeight())));
            this->ui->tableWidget->setItem(number-1,6, new QTableWidgetItem(QString::number(Playerlist.at(i).getHeight())));
            this->ui->tableWidget->setItem(number-1,7, new QTableWidgetItem(Playerlist.at(i).getID()));
        }
    }
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    int i = ui->listWidget->currentRow();
    ui->lineClubname->setText(Clublist[i].getName());
    ui->lineClubcity->setText(Clublist[i].getCity());
    ui->lineManager->setText(Clublist[i].getCoach());
    ui->listWidget_2->clear();
    for (int j = 1; j < Playerlist.size(); ++j)
    {
        if (Playerlist[j].getClub() == Clublist[i].getName())
        {
            ui->listWidget_2->addItem(Playerlist[j].getName());
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    Writeplayerdata();
}

void MainWindow::on_pushButton_4_clicked()
{
    QString playername = ui->textEdit->toPlainText();
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    showPlayersList(playername);

}

void MainWindow::on_pushButton_5_clicked()
{
   widGet3 = new widget3;
   widGet3->show();
}
