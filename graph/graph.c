#include <raylib.h>
#include <stdio.h>

#include "../mulib.h"
#include "./array.h" //this includes the variable coord that contains the array

#define FACTOR 70
#define WIDTH 16*FACTOR
#define HEIGHT 9*FACTOR

int main(){
	InitWindow(WIDTH, HEIGHT, "Graph drawer");
	SetTargetFPS(60);

	//Coordinates coord[]={{1.0,0.5},{0.5,1.0},{0.3,0.2},{0.4,0.6},{0.1,2.0},{0.0,0.0},{0.5,0.5},{1.0,2.0},{0.0,2.0},{1.0,0.0}};
	int num=sizeof_array(coord); //from this we get the size of the array
	printf("%d\n",num);

	/*//debug
	for (int i=0; i<num; ++i) {
		printf("(%f,%f)\n",coord[i].x,coord[i].y);
	}*/

	Coordinates max = max_of_coord(coord, num);
	Coordinates min = min_of_coord(coord, num);
	Coordinates average = {(max.x+min.x)/2,(max.y+min.y)/2};

	printf("MAX:\t[%f,%f]\nMIN:\t[%f,%f]\nAVG:\t[%f,%f]\n",max.x,max.y,min.x,min.y,average.x,average.y);

	while (!WindowShouldClose()) {
		if (IsKeyPressed(KEY_ESCAPE)) {
			CloseWindow();
		}
		
		BeginDrawing();
		int val=10;
		DrawLine(val, GetScreenHeight()-val, GetScreenWidth()-val, GetScreenHeight()-10, WHITE);
		DrawLine(val, val, val, GetScreenHeight()-10, WHITE);
		int posx, posy;
		for (int i=0; i<num; ++i) {
			if (coord[i].x<average.x) {
				posx=coord[i].x*GetScreenWidth()/max.x+val;
			} else if (coord[i].x>average.x) {
				posx=coord[i].x*GetScreenWidth()/max.x-val;
			} else {
				posx=coord[i].x*GetScreenWidth()/max.x;
			}
			if (coord[i].y<=average.y) {
				posy=(1-coord[i].y/max.y)*GetScreenHeight()-val;
			} else if (coord[i].y>average.y) {
				posy=(1-coord[i].y/max.y)*GetScreenHeight()+val;
			} else {
				posy=(1-coord[i].y/max.y)*GetScreenHeight();
			}			
			DrawCircle(posx, posy, 10, RED);
		}

		ClearBackground(BLACK);
		EndDrawing();
	}    
}
