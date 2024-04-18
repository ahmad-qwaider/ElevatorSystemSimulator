#include "elevator.h"

int Elevator::nextID = 1;

Elevator::Elevator(QObject *parent) : QObject(parent), currentFloor(0),   ID(nextID++), elevatorState(ElevatorState::IDLE), doorState(DoorState::DOORS_CLOSING), counterObstaclesDetected(0), targetFloor(0), safeFloor(0) {
    movementTimer = new QTimer(this);
    doorTimer = new QTimer(this);
    doorTimer->setSingleShot(true);
    connect(movementTimer, &QTimer::timeout, this, &Elevator::updateFloor);
    connect(doorTimer, &QTimer::timeout, this, &Elevator::onDoorsOpenTimerTimeout);
}


void Elevator::moveToFloor(int floorNumber) {
    if(elevatorState == ElevatorState::IDLE){

    if(currentFloor < floorNumber) {
        elevatorState = ElevatorState::MOVING_UP;
        upwardRequests.insert(floorNumber);
    } else if(currentFloor > floorNumber) {
        elevatorState = ElevatorState::MOVING_DOWN;
        downwardRequests.insert(floorNumber);
    }
    else{
        openDoor(); //if the elevator is on the same floor
        return;
    }
    movementTimer->start(2500); // start the timer to simulate movement
    }
    else if(currentFloor < floorNumber && elevatorState == ElevatorState::MOVING_UP){
        upwardRequests.insert(floorNumber);
    }
    else if(currentFloor > floorNumber && elevatorState == ElevatorState::MOVING_DOWN){
        downwardRequests.insert(floorNumber);
    }
}


void Elevator::updateFloor() {
    currentFloor += (elevatorState == ElevatorState::MOVING_UP) ? 1 : -1;
    emit messageToUI("Elevator#" + QString::number(ID) + " arrived at floor " + QString::number(currentFloor));

    if ((elevatorState == ElevatorState::MOVING_UP && !upwardRequests.empty()) ||
        (!downwardRequests.empty())) {
        processMovingState();
    }

    processArrival();

    emit floorChanged(QString::number(ID));
}

void Elevator::processMovingState() {
    if (!upwardRequests.empty() && elevatorState == ElevatorState::MOVING_UP) {
        targetFloor = *upwardRequests.begin();
    } else if (!downwardRequests.empty()) {
        targetFloor = *downwardRequests.rbegin();
    }
}

void Elevator::processArrival() {
    if (currentFloor == targetFloor) {
        openDoor();
        updateStateAndTimer();
    }
}

void Elevator::updateStateAndTimer() {
    if (emergency == 0 && currentFloor == safeFloor) {
        elevatorState = ElevatorState::IDLE;
        movementTimer->stop();
        return;
    }

    emit arrived(currentFloor, ID);
    if (elevatorState == ElevatorState::MOVING_UP) {
        upwardRequests.erase(upwardRequests.begin());
        if (upwardRequests.empty()) {
            elevatorState = ElevatorState::IDLE;
            movementTimer->stop();
        } else {
            targetFloor = *upwardRequests.begin();
        }
    } else {
        downwardRequests.erase(std::prev(downwardRequests.end()));
        if (downwardRequests.empty()) {
            elevatorState = ElevatorState::IDLE;
            movementTimer->stop();
        } else {
            targetFloor = *downwardRequests.rbegin();
            elevatorState = ElevatorState::MOVING_DOWN;
        }
    }
}


void Elevator::openDoor() {
    if (movementTimer->isActive()) {
        movementTimer->stop(); // Stop movement timer when opening doors
    }

    doorState = DoorState::DOORS_OPENING;
    emit messageToUI("Ring Ring... elevator#" + QString::number(ID) + " doors opening.");
    doorTimer->start(10000);
}


void Elevator::onDoorsOpenTimerTimeout() {
    // This method is called when the door has been open long enough and needs to close
    if (doorState == DoorState::DOORS_OPENING) {
    closeDoor();
   }

    if ((!upwardRequests.empty() || !downwardRequests.empty()) && emergency != 0) {

        movementTimer->start(2500); // Resume movement
    }
}


void Elevator::openDoorButton(){
    if (doorTimer->isActive()) {
        doorTimer->stop();
        doorState = DoorState::DOORS_OPENING;
        emit messageToUI("Elevator#" + QString::number(ID) + " doors opening.");
    }
}


void Elevator::closeDoor() {
    doorState = DoorState::DOORS_CLOSING;
    emit messageToUI("Ring Ring.... elevator#" + QString::number(ID) + " doors closing.");
}


void Elevator::closeDoorButton(){
    if (doorTimer->isActive()) {
        doorTimer->stop();
        closeDoor();

        if (!upwardRequests.empty() || !downwardRequests.empty() ) {

            movementTimer->start(2500); // Resume movement
        }
    }
}


// in real Elevator system it will have it's own implementation
void Elevator::displayMessage(const QString& message){
    emit messageToUI(message);
}


void Elevator::startAudio(){
    emit messageToUI("audio ON ......");
}


void Elevator::emergencyMoveToSafeFloor(){
    if (movementTimer->isActive()) {
        movementTimer->stop();
    }

    if(elevatorState == ElevatorState::MOVING_UP){
       elevatorState = ElevatorState::IDLE;
    }

    emergency = 0;
    moveToFloor(safeFloor);
}



