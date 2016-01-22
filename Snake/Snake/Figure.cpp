#include "Figure.h"

Figure::Figure(void)
{}


Figure::~Figure(void)
{}

void Figure::draw(){

	for(unsigned int i = 0; i < listPoint.size(); i++) {
		listPoint[i].printPoint();
	}
}