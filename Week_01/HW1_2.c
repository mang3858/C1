/*
주어진 거스름돈에 대해서 어떤 동전으로 거슬러 줄지를 계산하는 프로그램이다.
동전은 500 원, 100 원, 50 원, 10 원짜리 동전이 있으며, 거슬러 주는 동전의 개수를 최소한으로
하는 것을 목적으로 한다. 예를 들어 100 원을 거슬러 줄 경우, 10 원짜리 10 개를 거슬러 주는 것이
아니라, 100 원짜리 1 개를 거슬러 주어야 한다.

[주의사항]
1. 각 동전의 금액은 coins 라는 배열에 저장되어 있다.
2. int coins[4] = {500, 100, 50, 10};
3. 돌려주어야 할 금액이 change 이라는 변수에 저장되어 있다고 가정하면
4. 일단 금액이 큰 동전부터 시작한다.
5. 동전의 액면 금액(예를 들면, 500 원)으로 나누었을 때, 몫이 거슬러주어야 할 동전의
개수가 된다.
6. change 에 액면 금액으로 나눈 나머지를 넣고 다음 동전으로 넘어간다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int coins[4] = { 500, 100, 50, 10 };
	int i, change, num;

	printf("Enter the amount of change: ");
	scanf("%d", &change);

	for (i = 0; i < 4; i++) {
		num = change / coins[i];
		change = change % coins[i];
		
		printf("%d coin: %d\n", coins[i], num);
	}

	return 0;
}