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

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#ifndef MULIB_H_
#define MULIB_H_

#define PI_100 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
#define sizeof_array(array) (sizeof(array)/sizeof(array[0])) //it's awful, but it gets the work done

#endif

typedef struct{
	float x;
	float y;
}Coordinates ;

void mulib_print();
char *shift_args(int *argc, char ***argv);
Coordinates max_of_coord(Coordinates *array, int dim);
Coordinates min_of_coord(Coordinates *array, int dim);
float average(float *array, int dim);
float variance(float *array, int dim);
float standard_deviation(float *array, int dim);
