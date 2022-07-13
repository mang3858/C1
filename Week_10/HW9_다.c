/*
어떤 정수 n이 짝수면 2로 나누고 홀수면 3을 곱한 다음 1을 더한다. 이렇게 해서 새로 만들어진 숫자
를 n으로 놓고 n이1이 될 때까지 같은 작업을 반복한다. 예를 들어 n = 22이면 다음과 같은 수열이 만들어진다.
 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

 이 때 1이 나올 때까지 만들어진 수의 개수를 (n과 1포함) 사이클 길이라 한다. 예를 들어
n=22인 경우에는 사이클 길이가 16이다 (15아님). 특정한 수를 파라미터로 받아 위와 같은
수열을 출력하고 사이클 길이를 출력해주는 함수를 작성하시오. 함수의 원형은 다음과 같다.
void get_cycle_number(int n);
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void cycleNb(int num);
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d", &n);
	cycleNb(n);

	return 0;
}

void cycleNb(int num)
{
	int cnt = 1;

	printf("%d ", num);
	do {
		if (num % 2 == 0) {
			num = num / 2;
			printf("%d ", num);
		}
		else {
			num = num * 3 + 1;
			printf("%d ", num);
		}
		cnt++;
	} while (num != 1);

	printf("\n길이는 %d\n", cnt);

	return;
}