#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(void) {

	int random;
	int _sel;

	srand((unsigned int)time(NULL));

	system("title 가위바위보 v0.1");

	_select:
		printf("									\n");
		printf("			[1] 가위				\n");
		printf("			[2] 바위				\n");
		printf("			[3]  보					\n");
		printf("									\n");
		printf("선택 >>");
		scanf("%d", &_sel);

	if (_sel > 3) {
		printf("1~3까지만 입력 가능합니다.");
		Sleep(1000);
		goto _select;
	}
	else if (_sel == 3) {
		random = rand() % 3;
		if (random == 0)
			printf("제가 가위를 내서 이겼네요 ㅎㅎ\n");
		if (random == 1)
			printf("제가 바위를 내서 졌네요 ㅠㅠ\n");
		if (random == 2)
			printf("우리 보자기를 내서 통했나봐요 ㅋㅋ\n");
		goto _select;
	}
	else if (_sel == 2) {
		random = rand() % 3;
		if (random == 0)
			printf("제가 보자기를 내서 이겼네요 ㅎㅎ\n");
		if (random == 1)
			printf("제가 가위를 내서 졌네요 ㅠㅠ\n");
		if (random == 2)
			printf("우리 바위를 내서 통했나봐요 ㅋㅋ\n");
		goto _select;
	}
	else if (_sel == 1) {
		random = rand() % 3;
		if (random == 0)
			printf("제가 바위를 내서 이겼네요 ㅎㅎ\n");
		if (random == 1)
			printf("제가 보자기를 내서 졌네요 ㅠㅠ\n");
		if (random == 2)
			printf("우리 가위를 내서 통했나봐요 ㅋㅋ\n");
		goto _select;
	}

	return 0;
}
