/*
1월부터 12월까지의 수입은 다음과 같다.

1 월: 11, 2 월: 22, 3 월: 33, 4 월: 44, 5 월: 55, 6 월: 66,
7 월: 11, 8 월: 22, 9 월: 33, 10 월: 44, 11 월: 55, 12 월: 66

수입이 얼마인 달을 찾고 싶은가?라는 물음에 수입을 입력하고 이에 해당하는 달을 출력하는 프로그램을 작성하라.
해당 달이 여럿인 경우 앞선 달을 출력하기로 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i;
	int income[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search;
	int found;

	printf("탐색할 수입은? ");
	scanf("%d", &search);

	found = 0;
	for (i = 0; i < 12; i++) {
		if (income[i] == search) {
			found = 1;
			break;
		}
	}

	if (found == 1)
		printf("수입 %d를 갖는 첫번째 달은 %d월 입니다\n", search, i + 1);
	else
		printf("수입 %d를 갖는 달은 없습니다\n", search);

	return 0;
}