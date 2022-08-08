/*
자리수홀수합

정수 n을 읽어서
이를 3배 한 후
각 자리 수들 중 홀수의 합을 출력하는 프로그램을 작성하라.
main은 변경하지말고 print_odd_digit만 완성하라.
실행예 1:
입력)
123
출력)
12 (= 3 + 9: 123 * 3 = 369이고 이중 3과 9가 홀수)
실행예 2:
입력)
1451
출력)
11 (= 3 + 5 + 3: 1451 * 3 = 4353이고 이중 3 5 3이 홀수)

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int print_odd_digit(int num)
{
	int n;
	int sum = 0;

	while (num > 0) {
		n = num % 10;
		if (num % 2 != 0)
			sum += n;
		num /= 10;
	}

	return sum;
}
int main(void)
{
	int n;

	scanf("%d", &n);

	n = n * 3;
	printf("%d\n", print_odd_digit(n));

	return 0;
}