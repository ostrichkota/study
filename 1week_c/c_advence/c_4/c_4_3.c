#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char s1[] = "1000";
	char s2[] = "123.45";
	int a;
	double b;

	a = atoi(s1);
	b = atof(s2);
	printf("a=%d, b=%f\n", a, b);
	
	return(0);
}
