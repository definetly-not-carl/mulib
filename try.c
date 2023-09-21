#include "mulib.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	//I don't know if it will be very helpful, but it's good
	const char *program = shift_args(&argc, &argv);
	printf("program name: %s\n", program);

	if (argc>0) {
		const char *subcmd = shift_args(&argc, &argv);
		if (strcmp(subcmd, "logo")==0) {
			mulib_print();
		}
	} else {
		printf("try the program '%s' with the argument 'logo'\n", program);
	}
}
