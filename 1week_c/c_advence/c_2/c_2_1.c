#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int a = 100;
	double b = 123.4;
	float c = 123.4f;
	char d = 'a';

	printf("aの値は%d、大きさは%lubyte、アドレスは%p\n", a, sizeof(int), &a);
	printf("bの値は%f、大きさは%lubyte、アドレスは%p\n", b, sizeof(double), &b);
	printf("bの値は%f、大きさは%lubyte、アドレスは%p\n", c, sizeof(float), &c);
	printf("bの値は%c、大きさは%lubyte、アドレスは%p\n", d, sizeof(char), &d);
	
	return(0);
}