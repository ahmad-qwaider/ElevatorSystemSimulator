#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"
#include <algorithm>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool contains(const std::vector<int>& vec, int value);

private slots:
    void on_WeightTestButton_clicked();
    void updateConsole(const QString& message);
    void on_helpButton_clicked();
    void on_respondToHelpButton_clicked();
    void on_fireButton_clicked();
    void onAnyElevatorFloorsButtonClicked();
    void on_powerOuttageButton_clicked();
    void on_doorObstacleButton_clicked();
    void on_ElevatorNumber_currentIndexChanged(const QString &elevatorId);
    void ElevatorNumberChanged(const QString &elevatorId);
    void on_ringButton_clicked();
    void on_UpButton_clicked();
    void changeDisplay(const QString &elevatorId);
    void elevatorArrived(int floor , int elevatorid);
    void on_DownButton_clicked();
    void on_closeDoorButton_pressed();
    void on_openDoorButton_released();
    void on_openDoorButton_pressed();


private:

    void populateElevatorNumbers();
    void populateFloorNumbers();
    void removeButtonsHighlight();


    Ui::MainWindow *ui;
    Controller controller;
    std::vector<std::vector<int>> elevatorListOfListCheckedButtons;
};
#endif


