/*
word의 요소중 홀수번째(즉, 첫번째, 세번째,…)의 문자를 출력하도록 하라.

실행예
Enter a word(<= 10 chars): Happy
Hpy
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void) {
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars): ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		if (i % 2 == 0)
			printf("%c", word[i]);
	printf("\n");

	return 0;
}