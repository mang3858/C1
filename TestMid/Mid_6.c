/*
정수 a, b를 읽어서 a안에 b가 존재하는 경우
b와 b의 앞자리수들(b앞에 있는 모든 수들)을 같이 출력하도록 프로그램을 작성하라.
b에 해당하는 수가 존재하지 않는 경우는 0을 출력한다.
예를 들어서 a가 12345이고 b가 234이면
1234를 출력한다. 즉, 234와 그 앞자리수들을 함께 출력한다.
b가 a안에 여러 번 나오는 경우는 가장 뒷부분에 나오는 b를 찾아 그 앞자리수들과 함께 출력한다
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b;
	int i;
	int dividend, posNum;
	int tempB;

	scanf("%d", &a);
	scanf("%d", &b);

	//subNum의 자리 수 posNum을 구한다
	//10^posNum을 dividend에 넣는다

	i = 0;
	posNum = 0;
	dividend = 1;
	tempB = b;
	while (tempB > 0) {
		tempB /= 10;
		posNum++;

		if (i < posNum)
			dividend *= 10;
		i++;
	}

	while (a > 0) {
		if (a % dividend == b)
			break;
		a /= 10;
	}
	printf("%d\n", a);

	return 0;
}