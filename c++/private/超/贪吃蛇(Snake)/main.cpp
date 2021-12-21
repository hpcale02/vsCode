#include <iostream>
using namespace std;

#include "Map.h"
#include "Fruit.h"
#include "Snake.h"

void draw(Map &, Fruit &, Snake &);
bool gameOver(Map &, Snake &, Fruit &);
bool snakeEatFruit(Snake &, Fruit &);

int main()
{
    int score = 0;

    int choose;

    cout << "贪吃蛇Snake" << endl;
    cout << endl;
    cout << "  w   游戏" << endl;
    cout << " asd  操作" << endl;
    cout << " j => 加速" << endl;
    cout << " k => 减速" << endl;
    cout << endl;
    cout << "1:开始游戏" << endl;
    cout << "2:退出游戏" << endl;

    cout << "输入: ";
    cin >> choose;

    Map m;
    Fruit f;
    Snake s(m);

    switch (choose)
    {
    case 1:
        m.selectMapType();

        f.fruitGenerator(m);

        while (!gameOver(m, s, f))
        {
            cout << "SCORE: " << score << endl;

            draw(m, f, s);
            s.changeSnakeMoveDirection();
            s.snakeBodyMove();
            s.snakeHandMove();

            if (snakeEatFruit(s, f))
            {
                f.fruitGenerator(m);
                s.snakeGrowUp();
                score += 10;
            }

            system("clear");
        }
        break;
    case 2:
        cout << "退出游戏 exit" << endl;
        break;
    default:
        break;
    }

    cout << "**************" << endl;
    cout << "!!!GameOver!!!" << endl;
    cout << "**************" << endl;

    return 0;
}

void draw(Map &map, Fruit &fruit, Snake &snake)
{
    for (int h = 0; h < map.getHeightMap(); h++)
    {
        for (int w = 0; w < map.getWidthMap(); w++)
        {
            if (h == 0 || h == map.getHeightMap() - 1 || w == 0 || w == map.getWidthMap() - 1)
            {
                cout << "#";
            }
            else if (h == fruit.getFruitPositionY() && w == fruit.getFruitPositionX())
            {
                cout << "\033[1;31mQ\033[0m";
            }
            else if (h == snake.getSnakePositionY(0) && w == snake.getSnakePositionX(0))
            {
                cout << "\033[1;32mO\033[0m";
            }
            else
            {
                bool not_do = true;
                for (int i = 1; i <= snake.getSnakeMisure(); i++)
                {
                    if (h == snake.getSnakePositionY(i) && w == snake.getSnakePositionX(i))
                    {
                        cout << "\033[1;32mo\033[0m";
                        not_do = false;
                        break;
                    }
                }
                if (not_do)
                    cout << " ";
            }
        }
        cout << endl;
    }
}

bool gameOver(Map &map, Snake &snake, Fruit &fruit)
{
    // snake on wall
    if (snake.getSnakePositionX(0) == 0 || snake.getSnakePositionX(0) == map.getWidthMap() - 1 || snake.getSnakePositionY(0) == 0 || snake.getSnakePositionY(0) == map.getHeightMap() - 1)
        return true;
    else
        // snake on body
        for (int i = 2; i < snake.getSnakeMisure(); i++)
        {
            if (snake.getSnakePositionX(0) == snake.getSnakePositionX(i) && snake.getSnakePositionY(0) == snake.getSnakePositionY(i))
            {
                return true;
            }
        }
    return false;
}

bool snakeEatFruit(Snake &snake, Fruit &fruit)
{
    if (snake.getSnakePositionX(0) == fruit.getFruitPositionX() && snake.getSnakePositionY(0) == fruit.getFruitPositionY())
        return true;
    else
        return false;
}