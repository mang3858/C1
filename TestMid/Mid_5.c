/*
정수 num을 읽고 그것을 3배 하여 <새로운 정수>를 만든다.
0부터 9까지의 숫자 digit을 읽어서
<새로운 정수>안에 그 digit의 개수를 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num, digit, newNum;
	int i;
	int cnt = 0;

	scanf("%d", &num);
	scanf("%d", &digit);

	newNum = num * 3;

	while (newNum > 0) {
		newNum /= 10;
		if (newNum % 10 == digit)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}