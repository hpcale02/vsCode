#include <iostream>
using namespace std;

#include "Map.h"

Map::Map()
    : map_height(20), map_width(40)
{
}

void Map::setHeightMap(int height)
{
    map_height = height;
}

void Map::setWidthMap(int width)
{
    map_width = width;
}

int Map::getHeightMap()
{
    return map_height;
}

int Map::getWidthMap()
{
    return map_width;
}

void Map::selectMapType()
{
    while (1)
    {
        cout << "请选择地图模式_小(1)-中(2)-大(3)" << endl;
        cout << "please select map_type small(1)-medium(2)-big(3)" << endl;
        int player_choose;
        cin >> player_choose;

        switch (player_choose)
        {
        case 1:
            setWidthMap(40);
            setHeightMap(20);
            return;
        case 2:
            setWidthMap(60);
            setHeightMap(30);
            return;
        case 3:
            setWidthMap(80);
            setHeightMap(40);
            return;
        default:
            cout << "没有次选项,请重选" << endl;
            cout << "There is no such option, please reselect" << endl;
            break;
        }
    }
}