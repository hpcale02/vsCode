#ifndef SNAKE_H
#define SNAKE_H

#include "Map.h"
#include "Fruit.h"

class Snake
{
public:
    Snake(Map &);
    void changeSnakeMoveDirection();

    int getSnakePositionX(int);
    int getSnakePositionY(int);
    int getSnakeMisure();

    void snakeHandMove();
    void snakeBodyMove();

    void snakeSpeedUp();
    void snakeSpeedDown();

    void snakeGrowUp();

private:
    int snake_misure = 0;
    float snake_position_x[100];
    float snake_position_y[100];
    float velocity = 0.1;
    enum snakeDirection
    {
        STOP = 0,
        UP,
        RIGHT,
        DOWN,
        LEFT
    } snake_dir;
};

#endif