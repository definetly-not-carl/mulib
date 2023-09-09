#include "mulib.h"
#include <stdio.h>

int main(int argc, char **argv){
	mulib_print();

	//I don't know if it will be very helpful, but it's good
	const char *program = shift_args(&argc, &argv);
	printf("program name: %s\n", program);
}
