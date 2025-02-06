#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	// 2進数00001111
	unsigned char i = 0xf;
	// 2進数11111111;
	unsigned char j = 0xff;

	printf("%x << 1 = %x\n", i, i << 1);
	printf("%x >> 1 = %x\n", i, i >> 1);
	printf("%x | %x = %x\n", i, j, i | j);
	printf("%x & %x = %x\n", i, j, i & j);
	printf("~%x = %x\n", i, (unsigned char)~i);
}