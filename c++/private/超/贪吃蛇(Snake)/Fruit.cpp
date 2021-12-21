#include <iostream>
using namespace std;

#include <stdlib.h>

#include "Fruit.h"

Fruit::Fruit()
{
}

void Fruit::fruitGenerator(Map &map)
{
    srand(time(NULL));

    int map_height = map.getHeightMap() - 2;
    int map_width = map.getWidthMap() - 2;

    fruit_position_x = rand() % map_width + 1;
    fruit_position_y = rand() % map_height + 1;
}

int Fruit::getFruitPositionX()
{
    return fruit_position_x;
}

int Fruit::getFruitPositionY()
{
    return fruit_position_y;
}

// void Fruit::setFruitPositionX(int x_position)
// {
//     fruit_position_x = x_position;
// }

// void Fruit::setFruitPositionY(int y_position)
// {
//     fruit_position_y = y_position;
// }
