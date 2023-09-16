//
//  mulib.c
//  µlib 
//          _ _ _     
//    _   _| (_) |__  
//   | | | | | | '_ \
//   | |_| | | | |_) |
//   | ._,_|_|_|_.__/ 
//   |_|
//
//  Created by Carlo Moroni on 08/09/23
//

#include "mulib.h"
#include <stdio.h>

void mulib_print(){
	printf("        _ _ _     \n  _   _| (_) |__  \n | | | | | | '_ \\ \n | |_| | | | |_) |\n | ._,_|_|_|_.__/ \n |_|              \n"); //This is terrible, but it prints well
	printf("\n=====================\nµlib by Carlo Moroni\n=====================\n");
}

char *shift_args(int *argc, char ***argv){
	assert(*argc > 0);
        char *result = **argv;
	*argc -= 1;
	*argv += 1;
	return result;
}

Coordinates max_of_coord(Coordinates *array, int dim){
	Coordinates max={1.0,1.0};
	for (int i=0; i<dim; ++i) {
		if (array[i].x>max.x) {
			max.x=array[i].x;
		}
		if (array[i].y>max.y) {
			max.y=array[i].y;
		}
		//printf("%fx%f\n",max.x,max.y); //debug
	}
	return max;
}

Coordinates min_of_coord(Coordinates *array, int dim){
	Coordinates min={0.0,0.0};
	for (int i=0; i<dim; ++i) {
		if (array[i].x<min.x) {
			min.x=array[i].x;
		}
		if (array[i].y<min.y) {
			min.y=array[i].y;
		}
		//printf("%fx%f\n",min.x,min.y); //debug
	}
	return min;
}
