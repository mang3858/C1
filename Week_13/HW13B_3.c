/*
���ڿ�(word)�� �Է¹޾� �� ���� ���ڵ��� �Ųٷ� �Ͽ� ���ڿ�(newWord)�� ����� ����ϴ� ���α׷��� �ۼ��϶�.(LAB13B_1�� ����)

���࿹:
Enter one word: abcde
The reversed word is edcba
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i, len;
	char word[81], newWord[81];

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++);
	len = i;

	for (i = 0; word[i] != '\0'; i++)
		newWord[i] = word[len - i - 1];
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);

	return 0;
}