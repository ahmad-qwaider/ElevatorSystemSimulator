#ifndef REQUEST_H
#define REQUEST_H


enum class Direction {
    UP,
    DOWN
};



class Request {
public:
    int floorNumber;
    Direction direction;

    Request(int floorNumber, Direction direction) : floorNumber(floorNumber), direction(direction) {}

};

#endif
