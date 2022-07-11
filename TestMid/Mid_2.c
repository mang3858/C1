/*
점수를 입력하면 점수의 범위에 따라 다음과 같은 보너스 점수를 준다.
100점 이상: 50% 보너스
50점 이상: 25% 보너스
10점 이상: 15% 보너스
10점 미만: 보너스 없음
점수를 입력 받은 후 보너스 점수를 합한 점수를 소수점 2자리까지 출력하는 프로그램을 작성하라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;

	scanf("%d", &score);

	if (score >= 100)
		printf("%.2f\n", (double)score + score * 0.5);
	else if (score >= 50)
		printf("%.2f\n", (double)score + score * 0.25);
	else if (score >= 10)
		printf("%.2f\n", (double)score + score * 0.15);
	else
		printf("%.2f\n", (double)score);

	return 0;
}