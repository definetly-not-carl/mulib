//
//  mulib.h
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
//  Update 08/09/23

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#ifndef MULIB_H_
#define MULIB_H_

#define PI_100 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679 

#endif

void mulib_print();
char *shift_args(int *argc, char ***argv);

typedef struct{
	float x;
	float y;
}Coordinates ;
Coordinates max_of_coord(Coordinates *array, int dim);
