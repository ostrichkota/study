#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	int i, size;
	char *rdata;

	file = fopen("./test.bin", "rb");
	if (file == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(1);
	}
	fseek(file, 0, SEEK_END);
	size = ftell(file);
	rdata = (char *)malloc(sizeof(char) * size);
	fseek(file, 0, SEEK_SET);
	fread(rdata, sizeof(char), size, file);
	fclose(file);
	for(i = 0; i < size; i++){
		printf("%x ", rdata[i]);
	}
	printf("\n");
	fclose(file);
	return (0);
}