/*
문자열(word)을 입력받아 그 속의 문자들을 거꾸로 하여 문자열(newWord)을 만들어 출력하는 프로그램을 작성하라.(LAB13B_1을 참조)

실행예:
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