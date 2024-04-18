#include "controller.h"


Controller::Controller(QObject *parent) : QObject(parent), elevatorSystem(3, 7) {
    debounceTimer.setSingleShot(true);
    connect(&debounceTimer, &QTimer::timeout, this, &Controller::handleObstacleDebounceTimeout);
    connect(&helpResponseTimer, &QTimer::timeout, this, &Controller::helpResponseTimeout);

}


void Controller::handleDoorObstacle(int elevatorId) {
       elevatorSystem.getElevators()[elevatorId]->displayMessage("Door obstacle detected! at Elevator#" + QString::number(elevatorId+1) );
    if (lastDoorObstacleElevatorId == elevatorId || lastDoorObstacleElevatorId == -1) {
        obstacleActivationCount++;
        lastDoorObstacleElevatorId = elevatorId;
        if (!debounceTimer.isActive()) {
            debounceTimer.start(debounceInterval);
        }
    } else {
        obstacleActivationCount = 1;
        lastDoorObstacleElevatorId = elevatorId;
        debounceTimer.start(debounceInterval);
    }

    elevatorSystem.getElevators()[elevatorId]->openDoor();
}


void Controller::handleObstacleDebounceTimeout() {
    if (obstacleActivationCount >= activationThreshold) {
       elevatorSystem.getElevators()[lastDoorObstacleElevatorId]->displayMessage("Please ensure the door area is clear. Repeated obstructions detected at Elevator#" + QString::number(lastDoorObstacleElevatorId+1));
       elevatorSystem.getElevators()[lastDoorObstacleElevatorId]->startAudio();

    }
    obstacleActivationCount = 0; // Reset count after handling
    lastDoorObstacleElevatorId = -1; // Reset last activated elevator ID
}


void Controller::addRequest(int floorNumber, Direction direction) {
   Request newRequest = Request(floorNumber, direction);
   selectElevator(newRequest);

}


void Controller::selectElevator(Request request) {
  elevatorSystem.selectClosestElevator(request);
}


void Controller::handleFireAlarm() {
    for (int i = 0; i < getNumberOfElevators(); ++i) {
        elevatorSystem.getElevators()[i]->startAudio();
        elevatorSystem.getElevators()[i]->displayMessage("Emergency alert: Fire detected. Elevator#" + QString::number(elevatorSystem.getElevators()[i]->getID()) + " is moving to a safe floor. Please exit upon arrival for your safety");
        }
    elevatorSystem.moveAllTOSafeFloor();
}


void Controller::handleHelpButtonPressed(int elevatorId) {
    lastHelpRequestElevatorId = elevatorId;
    helpResponseTimer.start(5000);
    elevatorSystem.getElevators()[elevatorId]->displayMessage("Help requested from Elevator #" + QString::number(elevatorId+1) + ". Awaiting response from building safety.");

}


void Controller::helpResponseTimeout() {
    // This method is called if no response is received within 5 seconds
    if (lastHelpRequestElevatorId != -1) {
        helpResponseTimer.stop();
        elevatorSystem.getElevators()[lastHelpRequestElevatorId]->displayMessage("5 Seconds Has Passed! Calling 911!");
        lastHelpRequestElevatorId = -1; // Reset the ID
    }
}

void Controller::handleBuildingSafetyResponse() {
    if (helpResponseTimer.isActive()) {
        helpResponseTimer.stop();
        elevatorSystem.getElevators()[lastHelpRequestElevatorId]->displayMessage("Building Safety Service Connecting....");
        elevatorSystem.getElevators()[lastHelpRequestElevatorId]->startAudio();
        if (lastHelpRequestElevatorId != -1){
        lastHelpRequestElevatorId = -1; // Reset the ID
        }
    }
}


void Controller::handleOverload(int elevatorId) {
   elevatorSystem.getElevators()[elevatorId]->displayMessage("Overload Detected in Elevator#" + QString::number(elevatorId+1));
   elevatorSystem.getElevators()[elevatorId]->startAudio();
}


void Controller::handlePowerOut() {
    for (int i = 0; i < getNumberOfElevators(); ++i) {
        elevatorSystem.getElevators()[i]->startAudio();
        elevatorSystem.getElevators()[i]->displayMessage("Power outage detected. Elevato#" + QString::number(elevatorSystem.getElevators()[i]->getID()) + " is moving to a safe floor. Please exit upon arrival for your safety");
        }
     elevatorSystem.moveAllTOSafeFloor();
}


void Controller::moveElevator(int elevatorId, int floorNumber) {

    elevatorSystem.getElevators()[elevatorId]->moveToFloor(floorNumber);
}


void Controller::handleCloseDoorButton(int elevatorID){

    elevatorSystem.getElevators()[elevatorID]->closeDoorButton();
}


void Controller::handleOpenDoorButton(int elevatorID){

    elevatorSystem.getElevators()[elevatorID]->openDoorButton();
}


void Controller::handleOpenDoorButtonRelease(int elevatorID){

    elevatorSystem.getElevators()[elevatorID]->onDoorsOpenTimerTimeout();
}

