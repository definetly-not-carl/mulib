#include "mulib.h"
#include <stdio.h>
#include <string.h>

void math(){
	float array[]={2.321,2.4324,2.43,2.423,2.424,2.094,2.198};
	int dim=sizeof_array(array);
	float avg=average(array, dim);
	float var=variance(array,dim);
	float std_dev=standard_deviation(array, dim);
	printf("The average is: %f\nThe variance is: %f\nThe standard deviation is: %f\n",avg,var,std_dev);

};

int main(int argc, char **argv){
	//I don't know if it will be very helpful, but it's good
	const char *program = shift_args(&argc, &argv);
	printf("program name: %s\n", program);

	if (argc>0) {
		const char *subcmd = shift_args(&argc, &argv);
		if (strcmp(subcmd, "logo")==0) {
			mulib_print();
		} else if(strcmp(subcmd, "math")==0){
			math();
		}
	} else {
		printf("try the program '%s' with the argument 'logo' or 'math'\n", program);
	}
}
