#include "elevatorsystem.h"

ElevatorSystem::ElevatorSystem(int numberOfElevators, int numberOfFloors, QObject *parent)
    : QObject(parent), totalElevators(numberOfElevators), totalFloors(numberOfFloors), systemStatus(SystemStatus::OK) {
    for (int i = 0; i < numberOfElevators; ++i) {
            Elevator* elevator = new Elevator(this);
            elevators.push_back(elevator);
        }

}


void ElevatorSystem::selectClosestElevator(Request newRequest){
    int minDistance = std::numeric_limits<int>::max();
    int bestElevatorIndex = -1;
    int numofElevators = elevators.size();
    for (int i = 0; i < numofElevators; ++i) {

        int distance = std::abs(elevators[i]->getCurrentFLoor() - newRequest.floorNumber);

        // Elevator is moving towards the call and is in the path
        if ((newRequest.direction == Direction::UP && elevators[i]->getElevatorState() == ElevatorState::MOVING_UP && elevators[i]->getCurrentFLoor() < newRequest.floorNumber) ||
            (newRequest.direction == Direction::DOWN && elevators[i]->getElevatorState() == ElevatorState::MOVING_DOWN && elevators[i]->getCurrentFLoor() > newRequest.floorNumber)) {
            if (distance < minDistance) {
                minDistance = distance;
                bestElevatorIndex = i;
            }
        }
        // Consider idle elevators if no moving elevator is suitable
        else if (elevators[i]->getElevatorState() == ElevatorState::IDLE && distance < minDistance) {
            minDistance = distance;
            bestElevatorIndex = i;
        }
    }

    elevators[bestElevatorIndex]->moveToFloor(newRequest.floorNumber);
}


void ElevatorSystem::moveAllTOSafeFloor(){
     for (Elevator* elevator : elevators){
         elevator->emergencyMoveToSafeFloor();
     }
}


