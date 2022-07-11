/*
정수 n과 정수 unit을 읽어서
1부터 n까지의 수 중 unit개씩의 합을 출력하는 프로그램을 작성하려한다.
나머지가 모자란 경우는 출력하지 않는다
n보다 unit은 항상 작거나 같은 수가 입력된다고 가정하자.
예를 들어 n이 9이고 unit이 3으로 값이 입력된다면
6 15 24
를 출력한다. 다음과 같은 계산의 결과이다.
6 = 1 + 2 + 3
15 = 4 + 5 + 6
24 = 7 + 8 + 9
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, unit;
	int i, j;
	int sum = 0;

	scanf("%d %d", &n, &unit);

	for (i = 1; i <= n; i++) {
		sum += i;
		if (i % unit == 0) {
			printf("%d ", sum);
			sum = 0;
		}
	}
	printf("\n");

	return 0;
}