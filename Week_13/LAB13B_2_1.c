/*
���ڿ��� �Է¹޾Ƽ�, �� �ȿ� �����ϴ� �빮�� ���ĺ����� ����ϴ� ���α׷��� �ۼ��϶�.
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