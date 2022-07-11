/*
5 개의 성적을 입력받아서 그중 가장 큰 수를 찾아 출력하는 프로그램을 작성하라.
for문 이용
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, value;
	int i;
	int max = -1;
	int min = 999;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &value);

		if (max < value)
			max = value;
		if (min > value)
			min = value;
	}
	if (n == 0)
		printf("no data\n");
	else
		printf("%d\n%d\n", max, min);

	return 0;
}