#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(void) {

	int random;
	int _sel;

	srand((unsigned int)time(NULL));

	system("title ���������� v0.1");

	_select:
		printf("									\n");
		printf("			[1] ����				\n");
		printf("			[2] ����				\n");
		printf("			[3]  ��					\n");
		printf("									\n");
		printf("���� >>");
		scanf("%d", &_sel);

	if (_sel > 3) {
		printf("1~3������ �Է� �����մϴ�.");
		Sleep(1000);
		goto _select;
	}
	else if (_sel == 3) {
		random = rand() % 3;
		if (random == 0)
			printf("���� ������ ���� �̰�׿� ����\n");
		if (random == 1)
			printf("���� ������ ���� ���׿� �Ф�\n");
		if (random == 2)
			printf("�츮 ���ڱ⸦ ���� ���߳����� ����\n");
		goto _select;
	}
	else if (_sel == 2) {
		random = rand() % 3;
		if (random == 0)
			printf("���� ���ڱ⸦ ���� �̰�׿� ����\n");
		if (random == 1)
			printf("���� ������ ���� ���׿� �Ф�\n");
		if (random == 2)
			printf("�츮 ������ ���� ���߳����� ����\n");
		goto _select;
	}
	else if (_sel == 1) {
		random = rand() % 3;
		if (random == 0)
			printf("���� ������ ���� �̰�׿� ����\n");
		if (random == 1)
			printf("���� ���ڱ⸦ ���� ���׿� �Ф�\n");
		if (random == 2)
			printf("�츮 ������ ���� ���߳����� ����\n");
		goto _select;
	}

	return 0;
}
