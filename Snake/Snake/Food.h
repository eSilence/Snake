#pragma once
#include "figure.h"
#include "Wall.h"

class Food {
	Wall* wall;
	Point food;
public:
	Food(Wall *wall);
	Point createFood();
	Point getPoint(){return food;}
	~Food(void);
};

