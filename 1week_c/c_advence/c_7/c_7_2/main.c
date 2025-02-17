#include <stdio.h>
#include "studentDatabase.h"
#include "dataOutput.h"

int main() {
	int i;
	char names[][LENGTH] = { "山田太朗","太田美智子","大山次郎","山口さやか" };
	int ids[] = { 1,2,2,3 };
	initDatabase();
	for (i = 0; i < 4; i++) {  //  �f�[�^�̓o�^
		add(ids[i], names[i]);
		printf("登録:%d %s\n", ids[i], names[i]);
		showError();
	}
	for (i = 0; i < 3; i++) {  //  �o�^�����f�[�^�̏o��
		showStudentData(get(i + 1));
	}
	return(0);
}