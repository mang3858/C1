/*
월을 입력으로 받아서 그 월의 일수를 출력하는 프로그램을 작성하라.
유효하지 않은 월을 입력한 경우 "invalid month"라고 출력한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int month;

	scanf("%d", &month);

	switch (month) 
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d\n", 31);
		break;
	case 2:
		printf("%d\n", 28);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d\n", 30);
		break;
	default:
		printf("invalid month\n");
		break;
	}

	return 0;
}