#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int n1, int n2, int n3);

int main(void){
	int a = 100;
	int b = 200;
	int *p = NULL;

	p = &a;
	show(a, b, *p);
	*p = 300;
	show(a, b, *p);
	p = &b;
	show(a, b, *p);
	*p = 400;
	show(a, b, *p);
	
	return(0);
}

void show(int n1, int n2, int n3){
	printf("a=%d b=%d p = %d\n", n1, n2, n3);
}