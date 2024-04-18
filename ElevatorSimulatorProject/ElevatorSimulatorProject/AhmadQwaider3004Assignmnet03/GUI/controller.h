#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <vector>
#include <string>
#include <QTimer>
#include "request.h"
#include "elevatorsystem.h"

class Controller : public QObject {
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);


     int getNumberOfElevators() const {return elevatorSystem.getTotalElevators();}
     int getNumberOfFloors() const {return elevatorSystem.getTotalFLoors();}\
     int getCurrentFloor(int elevatorId){return elevatorSystem.getElevators()[elevatorId-1]->getCurrentFLoor();}
     ElevatorState getElevatorState(int elevatorId){return elevatorSystem.getElevators()[elevatorId-1]->getElevatorState();}
     ElevatorSystem* getElevatorSystem() {return &elevatorSystem;}
     void handleCloseDoorButton(int elevatorID);
     void handleOpenDoorButton(int elevatorID);
     void handleOpenDoorButtonRelease(int elevatorID);
     void handleDoorObstacle(int elevatorId);
     void addRequest(int floorNumber, Direction direction);
     void selectElevator(Request request);
     void handleFireAlarm();
     void moveElevator(int elevatorId, int floorNumber);
     void handleHelpButtonPressed(int elevatorId);
     void handleOverload(int elevatorId);
     void handlePowerOut();
     void handleBuildingSafetyResponse();


private slots:
    void helpResponseTimeout();
    void handleObstacleDebounceTimeout();

private:
    QTimer debounceTimer;
    int obstacleActivationCount = 0;
    const int activationThreshold = 2; // Threshold for multiple activations
    const int debounceInterval = 3000; // Debounce interval in milliseconds (3 seconds)
    int lastDoorObstacleElevatorId = -1; // Track the last door obstacle elevator ID
    QTimer helpResponseTimer; // Timer to handle the timeout for help response
    int lastHelpRequestElevatorId = -1; // Store the last elevator ID that requested help
    class ElevatorSystem elevatorSystem;
};

#endif // CONTROLLER_H
