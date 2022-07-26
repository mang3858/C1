/*
N(<= 20)명의 학생 성적을 읽어서 성적을 별막대그래프로 나타내는 프로그램을 작성하라.

힌트
- 중첩된 반복문을 사용하여야한다.(별을 출력할 때)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int score[20];
	int num;
	int i, j;

	printf("Enter the number of scores<<= 20>: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		printf("Eneter a score: ");
		scanf("%d", &score[i]);
	}

	for (i = 1; i <= num; i++) {
		printf("Student\t%d: ", i);
		for (j = 0; j < score[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}