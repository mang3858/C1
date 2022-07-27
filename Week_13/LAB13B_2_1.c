/*
문자열을 입력받아서, 그 안에 존재하는 대문자 알파벳들을 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char word[81];
	int i;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		if (word[i] >= 65 && word[i] <= 90)
			printf("%c\n", word[i]);

	return 0;
}