#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

/*
made by williameom
22.03.09 main.c ź��
*/


int _calc();
int _mollu();
int _duehagi();
int _ppagi();
int _gophagi();
int _nanugi();


int main(void) {
	_mollu();
	//_calc();
}


int _mollu(void) {

	int suntack;

	system("title ����");
	system("clear");
	printf("\n");
	printf("\n");
	printf("		[1] ���ϱ�		\n");
	printf("		[2] ����		\n");
	printf("		[3] ���ϱ�		\n");
	printf("		[4] ������		\n");
	printf("\n");
	printf("�����Ͻÿ�: ");
	scanf("%d", &suntack);

	switch (suntack) {
	case 1:
		_duehagi();
		break;
	case 2:
		_ppagi();
		break;
	case 3:
		_gophagi();
		break;
	case 4:
		_nanugi();
		break;
	default:
		system("clear");
		printf("�׵��� ����.");
		break;
	}
	return 0;
}

int _duehagi() {
	int _fst;
	int _sst;
	int _sum;
	system("clear");
	printf("ù��°�� ���Ҽ�: ");
	scanf("%d", &_fst);
	printf("�ι�°�� ���Ҽ�: ");
	scanf("%d", &_sst);
	_sum = _fst + _sst;
	printf("\n%d + %d = %d", _fst, _sst, _sum);
	return 0;
}

int _ppagi() {
	int _fst;
	int _sst;
	int _sum;
	system("clear");
	printf("ù��°�� ����: ");
	scanf("%d", &_fst);
	printf("�ι�°�� ����: ");
	scanf("%d", &_sst);
	_sum = _fst - _sst;
	printf("\n%d - %d = %d", _fst, _sst, _sum);
	return 0;
}

int _gophagi() {
	int _fst;
	int _sst;
	int _sum;
	system("clear");
	printf("ù��°�� ���Ҽ�: ");
	scanf("%d", &_fst);
	printf("�ι�°�� ���Ҽ�: ");
	scanf("%d", &_sst);
	_sum = _fst * _sst;
	printf("\n%d * %d = %d", _fst, _sst, _sum);
	return 0;
}

int _nanugi() {
	int _fst;
	int _sst;
	int _sum;
	printf("�̱���. ����");
	return 0;
}

int _calc(void) {
	int a, b;
	int result;
	char _buho;
	system("title ����");
	system("clear");
	printf("ù��° ��: ");
	scanf("%d", &a);

	printf("�����ȣ�� +, -, /, * �߿��� �Է��ϼ���: ");
	scanf("%*c%c", &_buho, 1);

	printf("�ι�° ��: ");
	scanf("%d", &b);

	if (_buho == '+') {
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
	}
	if (_buho == '-') {
		result = a - b;
		printf("%d - %d = %d\n", a, b, result);
	}
	if (_buho == '/') {
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d \n", a, b, result);
		}
		else
			printf("0���� �������� ���밡���� �ִ�?? (���� ����ó�� ���� ���� ���밡��) \n");
	}
	if (_buho == '*') {
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
	}

	return 0;
}