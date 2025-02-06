#include <stdio.h>
#include "c_7_1_sub.h"

int main(void){
	double d1, d2, d3, d4;
	double a = 1.2, b = 3.4, c = 2.7;

	d1 = avg(a, b);
	d2 = avg(4.1, 5.7);
	d3 = avg(c, 2.8);
	d4 = avg(2.0, 8.0);
	printf("d1 = %f, d2 = %f, d3 = %f, d4 = %f\n", d1, d2, d3, d4);

	return(0);
}
