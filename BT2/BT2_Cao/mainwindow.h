#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widget3.h"
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showPlayersList();
    void showPlayersList(QString );
public slots:
    void openNewWindow();
private slots:
    void on_pushButton_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_tabWidget_tabBarClicked(int index);


    void on_tableWidget_cellClicked(int row, int column);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    widget3 *widGet3;
};

#endif // MAINWINDOW_H
