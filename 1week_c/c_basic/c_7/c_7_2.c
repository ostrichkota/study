#include <stdio.h>
#include "c_7_2_sub.h"
#include "c_7_2_sub2.h"

int main(void){
	int a = 2, b = 3;

	printf("%d + %d = ", a, b);
	add(a, b);
	showAnswer();
	printf("%d - %d = ", a, b);
	sub(a, b);
	showAnswer();

	return (0);
}
