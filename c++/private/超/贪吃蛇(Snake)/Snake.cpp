#include <iostream>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

#include "Snake.h"

/*******_kbhit() function**********************************************************/
int kbhit(void)
{
    struct termios oldt, newt;
    int ch;
    int oldf;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);
    if (ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
}
/*******finish _kbhit() function**************************************************/

Snake::Snake(Map &map)
{
    snake_position_x[0] = map.getWidthMap() / 2;
    snake_position_y[0] = map.getHeightMap() / 2;
}

int Snake::getSnakePositionX(int part_of_body)
{
    if (part_of_body <= snake_misure)
        return snake_position_x[part_of_body];
    else
        return 0;
}

int Snake::getSnakePositionY(int part_of_body)
{
    if (part_of_body <= snake_misure)
        return snake_position_y[part_of_body];
    else
        return 0;
}

int Snake::getSnakeMisure()
{
    return snake_misure;
}

void Snake::changeSnakeMoveDirection()
{
    if (kbhit())
    {
        char move;
        move = getchar();

        switch (move)
        {
        case 'w':
            if (snake_dir != DOWN || snake_misure == 0)
                snake_dir = UP;
            break;
        case 'd':
            if (snake_dir != LEFT || snake_misure == 0)
                snake_dir = RIGHT;
            break;
        case 's':
            if (snake_dir != UP || snake_misure == 0)
                snake_dir = DOWN;
            break;
        case 'a':
            if (snake_dir != RIGHT || snake_misure == 0)
                snake_dir = LEFT;
            break;
        case 'x':
            snake_dir = STOP;
            break;
        case 'j':
            snakeSpeedUp();
            break;
        case 'k':
            snakeSpeedDown();
            break;
        default:
            break;
        }
    }
}

void Snake::snakeHandMove()
{
    switch (snake_dir)
    {
    case UP:
        velocity /= 2;
        snake_position_y[0] -= velocity;
        velocity *= 2;
        break;
    case RIGHT:
        snake_position_x[0] += velocity;
        break;
    case DOWN:
        velocity /= 2;
        snake_position_y[0] += velocity;
        velocity *= 2;
        break;
    case LEFT:
        snake_position_x[0] -= velocity;
        break;
    case STOP:
        break;
    default:
        break;
    }
}

void Snake::snakeBodyMove()
{
    if ((snake_misure > 0) &&
        (snake_position_x[0] - snake_position_x[1] > 1 ||
         snake_position_x[0] - snake_position_x[1] < -1 ||
         snake_position_y[0] - snake_position_y[1] > 1 ||
         snake_position_y[0] - snake_position_y[1] < -1))
    {
        for (int body_part = snake_misure; body_part >= 1; body_part--)
        {
            snake_position_x[body_part] = snake_position_x[body_part - 1];
            snake_position_y[body_part] = snake_position_y[body_part - 1];
        }
    }
}

void Snake::snakeSpeedUp()
{
    velocity = 0.25;
}

void Snake::snakeSpeedDown()
{
    velocity = 0.1;
}

void Snake::snakeGrowUp()
{
    snake_misure++;
}
