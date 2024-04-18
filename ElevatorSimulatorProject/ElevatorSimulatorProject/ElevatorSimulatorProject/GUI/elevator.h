#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QObject>
#include <QTimer>
#include <string>
#include <set>
#include "elevatorpanel.h"
#include "sensor.h"
#include"request.h"

using namespace std;


enum class ElevatorState {
    IDLE,
    MOVING_UP,
    MOVING_DOWN,
};

enum class DoorState {
    DOORS_OPENING,
    DOORS_CLOSING,
};


class Elevator: public QObject
{
    Q_OBJECT
public:
    Elevator(QObject *parent = nullptr);
    static int nextID;

    int getID(){return ID;}
    int getCurrentFLoor() {return currentFloor;}
    ElevatorState getElevatorState(){return elevatorState;}
    DoorState getDoorState(){return doorState;}
    void moveToFloor(int floorNumber);
    void openDoor();
    void closeDoor();
    void emergencyMoveToSafeFloor();
    void helpButtonPressed();
    void displayMessage(const QString& message);
    void startAudio();
    void closeDoorButton();
    void openDoorButton();

signals:
    void floorChanged(QString elevatorID);
    void arrived(int floor, int elvevatorID);
    void messageToUI(const QString& message);


public slots:
    void onDoorsOpenTimerTimeout();

private slots:
    void updateFloor(); // Slot to handle movementTimer timeout

private:
    int currentFloor;
    int ID;
    ElevatorState elevatorState;
    DoorState doorState;
    int counterObstaclesDetected;
    int emergency = -1;
    int targetFloor; // keep track of the destination floor
    int safeFloor;
     QTimer *movementTimer; // Timer for simulating floor movement
     QTimer *doorTimer; // Timer for simulating elevator door movement
     std::set<int> upwardRequests;
     std::set<int> downwardRequests;
     void processMovingState();
     void processArrival();
     void updateStateAndTimer();
};



#endif
