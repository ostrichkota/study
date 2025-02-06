#include <stdio.h>

int main(void){
	int dice;

	printf("1〜6の値を入力してください：");
	scanf("%d", &dice);
	if (dice >= 1 && dice <= 6){
		if (dice == 2 || dice == 4 || dice == 6){
			printf("丁（チョウ）です。\n");
		}
		else{
			printf("半（ハン）です。\n");
		}
	}
	else {
		printf("範囲外の値です。\n");
	}

	return(0);
}