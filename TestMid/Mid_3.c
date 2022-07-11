/*
정수 x, y 그리고 정수 10개을 읽어서
x보다 크고, y 보다 작은 숫자의 개수와 그 합을 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, y;
	int nums;
	int sum = 0;
	int cnt = 0;
	int i;

	scanf("%d %d", &x, &y);

	for (i = 0; i < 10; i++) {
		scanf("%d", &nums);

		if (x < nums && y > nums) {
			sum += nums;
			cnt++;
		}
	}
	printf("%d\n%d\n", sum, cnt);

	return 0;
}