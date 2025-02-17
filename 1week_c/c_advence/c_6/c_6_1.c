#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	file = fopen("./sample.txt", "w");
	if (file == NULL){
		printf("ファイルが開けません。\n");
		exit(1);
	}
	fprintf(file, "Hello World.\r\n");
	fprintf(file, "ABCDEF\r\n");
	fclose(file);
	return (0);
}