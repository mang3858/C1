/*
두개의 성적을 입력받아서 평균을 계산해서 학점을 결정해서 출력하는 프로그램을 작성하라. 
80 점 이상이면 A, 50 점 이상이면 B, 그 외에는 F 

실행예:
Enter a score: 50
Enter a score: 60
Grade is B!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int scoreReading(void);
char gradeDecision(int s1, int s2);
int main(void)
{
	int score1, score2;
	//scoreReading()을 이용해서 score1 과 score2 를 입력받는다. 
	score1 = scoreReading();
	score2 = scoreReading();

	printf("Grade is %c!\n", gradeDecision(score1, score2));
}

int scoreReading(void)
{
	int s;
	printf("Enter a score: ");
	scanf("%d", &s);

	return s;
}

char gradeDecision(int s1, int s2)
{
	int average;
	char grade;// 반드시 사용

	average = (s1 + s2) / 2;

	if (average >= 80)
		grade = 'A';
	else if (average >= 50)
		grade = 'B';
	else
		grade = 'F';

	return grade;
}