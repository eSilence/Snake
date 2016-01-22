#include "Wall.h"
#include <Windows.h>
#include "Snake.h"
#include <conio.h>
#include "Food.h"


int main(){
	
	Point upLeft(0,0);
	Wall wall(upLeft, 50, 40, '#');
	wall.draw();

	Snake snake(Point(5,5,'*'),4, RIGHT);

//	Direction direction;
	Food food(&wall);

	food.createFood();

	while (1){
		if (snake.isfindFood(food.getPoint())){
			food.createFood();
			continue;
		}
		 if(kbhit()){
			 snake.handleKey();
		 }
			snake.draw();
			Sleep(100);
    }

	system("Pause");
}

