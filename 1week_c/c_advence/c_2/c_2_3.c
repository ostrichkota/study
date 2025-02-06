#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *, int *);

int main(void){
	int a = 1, b = 2;
	printf("a = %d b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d b = %d\n", a, b);
	
	return(0);
}

void swap(int *num1, int *num2){
	int temp = *num1;

	*num1 = *num2;
	*num2 = temp;

	return ;
}