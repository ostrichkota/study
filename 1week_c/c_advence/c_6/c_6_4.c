#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	int i;
	char wdata[] = {0x10, 0x1a, 0x1e, 0x1f};
	char rdata[4];

	file = fopen("./test.bin", "wb");
	if (file == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(1);
	}
	fwrite(wdata, sizeof(char), sizeof(wdata), file);
	fclose(file);

	file = fopen("./test.bin", "rb");
	if (file == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(1);
	}
	fread(rdata, sizeof(char), sizeof(rdata), file);
	fclose(file);
	for(i = 0; i < sizeof(rdata); i++){
		printf("%x ", rdata[i]);
	}
	printf("\n");
	fclose(file);
	return (0);
}