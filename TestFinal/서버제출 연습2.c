/*
문자열(길이 80이하)그 안에 존재하는 숫자들의 총합을 계산하여 출력하는 프로그램을 작성하라.
유의사항: 모듈화(함수 사용)를 해도 되고 main함수만으로 코드를 만들어도 됩니다.

실행예1
abcd12ef34 <- 입력 문자열
10 <- 출력: 1 + 2 + 3 + 4 = 10

실행예2
4Abcc3dd9 <- 입력 문자열
16 <- 출력: 4 + 3 + 9 = 16
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char s[81];
	int i, sum = 0;

	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= '0' && s[i] <= '9')
			sum += s[i] - '0';
	}
	printf("%d\n", sum);

	return 0;
}