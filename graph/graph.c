#include <raylib.h>
#include <stdio.h>

#include "../mulib.h"

#define FACTOR 70
#define WIDTH 16*FACTOR
#define HEIGHT 9*FACTOR

int main(){
	InitWindow(WIDTH, HEIGHT, "Graph drawer");
	SetTargetFPS(60);

	Coordinates coord[]={{1.0,0.5},{0.5,1.0},{0.3,0.2},{0.4,0.6},{0.1,2.0},{0.0,0.0},{0.5,0.5},{1.0,2.0},{0.0,2.0},{1.0,0.0}};
	int num=10;

	/*//debug
	for (int i=0; i<num; ++i) {
		printf("(%f,%f)\n",coord[i].x,coord[i].y);
	}*/

	Coordinates max = max_of_coord(coord, num);

	printf("[%f,%f]\n",max.x,max.y);

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
			if (coord[i].x<0.5) {
				posx=coord[i].x*GetScreenWidth()/max.x+10;
			} else if (coord[i].x>0.5) {
				posx=coord[i].x*GetScreenWidth()/max.x-10;
			}
			if (coord[i].y<0.5) {
				posy=(1-coord[i].y/max.y)*GetScreenHeight()-10;
			} else if (coord[i].y>0.5) {
				posy=(1-coord[i].y/max.y)*GetScreenHeight()+10;
			}
			DrawCircle(posx, posy, 10, RED);
		}

		ClearBackground(BLACK);
		EndDrawing();
	}    
}
