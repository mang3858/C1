/*
프린트할 문자와 그 문자의 개수를 입력받아서 그 문자를 개수만큼 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printManyChars(char ch, int num); // 함수의 원형
int main(void)
{
	char c;
	int n;

	printf("Enter a character to print: ");
	scanf("%c", &c);
	printf("Enter the number of character: ");
	scanf("%d", &n);

	printManyChars(c, n);

	return 0;
}

void printManyChars(char ch, int num)
{
	int i;

	for (i = 0; i < num; i++)
		printf("%c", ch);
	printf("\n");

	return;
}