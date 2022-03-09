#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

/*
made by williameom
22.03.09 main.c 탄생
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

	system("title 계산기");
	system("clear");
	printf("\n");
	printf("\n");
	printf("		[1] 더하기		\n");
	printf("		[2] 빼기		\n");
	printf("		[3] 곱하기		\n");
	printf("		[4] 나누기		\n");
	printf("\n");
	printf("선택하시오: ");
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
		printf("그딴거 없다.");
		break;
	}
	return 0;
}

int _duehagi() {
	int _fst;
	int _sst;
	int _sum;
	system("clear");
	printf("첫번째로 더할수: ");
	scanf("%d", &_fst);
	printf("두번째로 더할수: ");
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
	printf("첫번째로 뺄수: ");
	scanf("%d", &_fst);
	printf("두번째로 뺄수: ");
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
	printf("첫번째로 곱할수: ");
	scanf("%d", &_fst);
	printf("두번째로 곱할수: ");
	scanf("%d", &_sst);
	_sum = _fst * _sst;
	printf("\n%d * %d = %d", _fst, _sst, _sum);
	return 0;
}

int _nanugi() {
	int _fst;
	int _sst;
	int _sum;
	printf("미구현. ㅅㄱ");
	return 0;
}

int _calc(void) {
	int a, b;
	int result;
	char _buho;
	system("title 계산기");
	system("clear");
	printf("첫번째 값: ");
	scanf("%d", &a);

	printf("연산기호를 +, -, /, * 중에서 입력하세요: ");
	scanf("%*c%c", &_buho, 1);

	printf("두번째 값: ");
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
			printf("0으로 나누려는 빡대가리가 있다?? (물론 예외처리 안한 나도 빡대가리) \n");
	}
	if (_buho == '*') {
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
	}

	return 0;
}