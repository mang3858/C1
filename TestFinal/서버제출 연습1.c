/*
어떤 정수 n이 짝수면 2로 나누고 홀수면 3을 곱한 다음 1을 더한다. 이렇게 해서 새로 만들어진
숫자를 n으로 놓고 n이1이 될 때까지 같은 작업을 반복한다. 예를 들어 n = 22이면 다음과 같은
수열이 만들어진다.
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1


• 이 때 1이 나올 때까지 만들어진 수의 개수를 (n과 1포함) 사이클 길이라 한다. 예를 들어
n=22인 경우에는 사이클 길이가 16이다 (15아님). 특정한 수를 파라미터로 받아 위와 같은
수열을 출력하고 사이클 길이를 반환해주는 함수를 작성하시오. 함수의 원형은 다음과 같다.
int get_cycle_number(int n);

실행예
22 <- 입력
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 <- 출력: 사이클 숫자
16 <- 출력: 사이클 숫자의 길이

실행예2
5 <- 입력
5 16 8 4 2 1 <- 출력: 사이클 숫자
6 <- 출력: 사이클 숫자의 길이
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int num);
int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d\n", get_cycle_number(n));
}
int get_cycle_number(int num) // 이 함수만 제출
{
	int cnt = 1;

	printf("%d ", num);
	while (num != 1) {
		if (num % 2 == 0)
			num /= 2;
		else 
			num = num * 3 + 1;
		printf("%d ", num);
		cnt++;
	}
	printf("\n");

	return cnt;
}
