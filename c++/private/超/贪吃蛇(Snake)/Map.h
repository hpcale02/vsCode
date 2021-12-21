#ifndef MAP_H
#define MAP_H

class Map
{
public:
    Map();

    void setHeightMap(int);
    void setWidthMap(int);

    int getHeightMap();
    int getWidthMap();
 
    void selectMapType();
    void drawMap();

private:
    int map_height;
    int map_width;
};

#endif