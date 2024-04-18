#ifndef SENSOR_H
#define SENSOR_H

#include <QObject>
#include <iostream>

class Sensor : public QObject {
    Q_OBJECT // This macro enables the class to use signals and slots

public:
    explicit Sensor(QObject *parent = nullptr) : QObject(parent) {}


    void doorObstacleDetected(int elevatorId);
    void overloadDetected(int elevatorId);
    void fireDetected();
};

#endif // SENSOR_H
