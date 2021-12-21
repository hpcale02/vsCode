#ifndef FRUIT_H
#define FRUIT_H

#include "Map.h"

class Fruit
{
public:
    Fruit();

    // void setFruitPositionX(int);
    // void setFruitPositionY(int);
    
    int getFruitPositionX();
    int getFruitPositionY();

    void fruitGenerator(Map&);

private:
    int fruit_position_x;
    int fruit_position_y;
};

#endif