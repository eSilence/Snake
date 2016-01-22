#include "Wall.h"
#include <Windows.h>
#include "Snake.h"
#include <conio.h>

Direction getDirection(char);

int main(){
	
	Point upLeft(0,0);
	Wall wall(upLeft, 50, 40, '#');
	wall.draw();

	Snake snake(Point(5,5,'*'),4, RIGHT);

	unsigned char ch;
	Direction direction;

    while (1){
		 if(kbhit()){
			ch = getch();
			if (ch == 224) {
				ch = getch();
				direction = getDirection(ch);
				snake.setDirection(direction);
			}
		 }
			snake.draw();
			Sleep(100);
    }

	system("Pause");
}

Direction getDirection(char ch){
    switch(ch)  {
		case 75: return LEFT; break;
		case 77: return RIGHT; break;
		case 72: return UP; break;
		case 80: return DOWN; break;
    }
}