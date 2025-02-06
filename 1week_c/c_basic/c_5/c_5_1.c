#include <stdio.h>

int main(void){
	double d[4];
	double sum, avg;
	int i;

	d[0] = 1.2;
	d[1] = 3.7;
	d[2] = 4.1;
	d[3] = 2.0;
	sum = 0.0;
	for (i = 0; i < 4; i++){
		printf("%f ", d[i]);
		sum += d[i];
	}
	printf("\n");
	avg = sum / 4.0;
	printf("合計値：%f\n", sum);
	printf("合計値：%f\n", avg);

	return(0);
}