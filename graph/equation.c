#include <stdio.h>

#define MAX_ITERATIONS 30

int main(){
	float x, increment;

	do {
	printf("Insert the maximum number: ");
	scanf("%f",&x);
	}while (x<0);

	increment = (float)x/MAX_ITERATIONS;
	printf("%f\n",increment);

	FILE *file;
	file = fopen("array.h", "w");

	fprintf(file,"Coordinates coord[]={");
	for (float i=0; i<=x; i=i+increment) {
		fprintf(file,"{%f,%f}",i,i*i);
		if (i+increment<x) {
			fprintf(file,",");
		}
	}
	fprintf(file,"};");
	fclose(file);
}
