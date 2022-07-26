/*
성적을 입력받아서 학점을 결정해서 출력하는 프로그램을 작성하라. 
(80 점 이상이면 A, 50 점 이상이면 B, 그 외에는 F).
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int scoreReading(void);
char gradeDecision(int s1);
int main(void)
{
	int score;
	score = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score)); 
}

int scoreReading(void)
{
	int s;

	printf("Enter a score: ");
	scanf("%d", &s);

	return s;
	
}

char gradeDecision(int s1)
{
	//별도의 지역변수를 선언하지 말라
	if (s1 >= 80)
		return 'A';
	else if (s1 >= 50)
		return 'B';
	else
		return 'F';
}