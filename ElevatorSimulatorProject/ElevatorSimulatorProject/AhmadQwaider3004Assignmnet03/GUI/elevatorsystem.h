#ifndef ELEVATORSYSTEM_H
#define ELEVATORSYSTEM_H

#include <vector>
#include "safetysystem.h"
#include "elevator.h"
#include "request.h"

using namespace std;


enum class SystemStatus {
    OK,
    EMERGENCY,
    POWER_OUTAGE
};

class ElevatorSystem : public QObject {
    Q_OBJECT
public:

    ElevatorSystem(int numberOfElevators, int numberOfFloors, QObject *parent = nullptr);

    SystemStatus status();
    int getTotalFLoors() const {return totalFloors;}
    int getTotalElevators() const {return totalElevators;}
    vector<Elevator*> getElevators(){return elevators;}
    void selectClosestElevator(Request newRequest);
    void moveAllTOSafeFloor();

private:
    int totalElevators;
    int totalFloors;
    SystemStatus systemStatus;
    vector<Elevator*> elevators;
};

#endif
