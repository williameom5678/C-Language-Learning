#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(void) {

	int random;
	int _sel;

	srand((unsigned int)time(NULL));

	system("title 亜是郊是左 v0.1");

	_select:
		printf("									\n");
		printf("			[1] 亜是				\n");
		printf("			[2] 郊是				\n");
		printf("			[3]  左					\n");
		printf("									\n");
		printf("識澱 >>");
		scanf("%d", &_sel);

	if (_sel > 3) {
		printf("1~3猿走幻 脊径 亜管杯艦陥.");
		Sleep(1000);
		goto _select;
	}
	else if (_sel == 3) {
		random = rand() % 3;
		if (random == 0)
			printf("薦亜 亜是研 鎧辞 戚医革推 ぞぞ\n");
		if (random == 1)
			printf("薦亜 郊是研 鎧辞 然革推 ばば\n");
		if (random == 2)
			printf("酔軒 左切奄研 鎧辞 搭梅蟹坐推 せせ\n");
		goto _select;
	}
	else if (_sel == 2) {
		random = rand() % 3;
		if (random == 0)
			printf("薦亜 左切奄研 鎧辞 戚医革推 ぞぞ\n");
		if (random == 1)
			printf("薦亜 亜是研 鎧辞 然革推 ばば\n");
		if (random == 2)
			printf("酔軒 郊是研 鎧辞 搭梅蟹坐推 せせ\n");
		goto _select;
	}
	else if (_sel == 1) {
		random = rand() % 3;
		if (random == 0)
			printf("薦亜 郊是研 鎧辞 戚医革推 ぞぞ\n");
		if (random == 1)
			printf("薦亜 左切奄研 鎧辞 然革推 ばば\n");
		if (random == 2)
			printf("酔軒 亜是研 鎧辞 搭梅蟹坐推 せせ\n");
		goto _select;
	}

	return 0;
}
