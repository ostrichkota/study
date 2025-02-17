#include <stdio.h>

void foo();

int main() {
	int i;
	for (i = 0; i < 4; i++) {
		foo();
	}
	return(0);
}

void foo()
{
	static int num = 0;
	printf("num=%d\n", num);
	num++;
}