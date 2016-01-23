#pragma once
#include "figure.h"
#include "Wall.h"

class Food {
	Wall* wall;
	Point food;
public:
	Food(Wall *wall);
	Point createFood();
	bool isCorrectFood();
	Point getPoint(){return food;}
	void draw();
	~Food(void);
};

