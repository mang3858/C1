/*
LAB10_3의 프로그램을 수정하여
별표를 그래프로 찍어주는 부분을 함수로 정의하고, 이를 main함수에서 호출하도록
프로그래밍하라. 주어진 프로그램 틀을 사용하라. 실행결과는 LAB10_3과 같다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printManyStars(int starNum);
int main(void)
{
	int t, m;
	int i;

	printf("Tom's score? ");
	scanf("%d", &t);
	printf("Mary's score? ");
	scanf("%d", &m);

	printf("----------Score Histogram----------\n");

	printf("Tom\t:");
	printManyStars(t);
	printf("Mary\t:");
	printManyStars(m);

	return 0;
}
void printManyStars(int starNum)
{
	int i;

	//starNum만큼 별 막대 출력(for문)
		//(starNum)출력;
	for (i = 0; i < starNum; i++)
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}