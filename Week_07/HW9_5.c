/*
사용자로부터 숫자 n 을 입력받는다. 
그리고 나서 다음 공식이 성립하는 최대 k 값을 계산해서 출력하라
2k(2의 k승) <= n*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	int product = 1;
	int cnt = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (product <= num) {
		product *= 2;
		cnt++;
	}

	printf("%d\n", cnt-1);
	return 0;
}