/*

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char str[81];
	int i, len;

	printf("Enter a string: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++);
	len = i;
	printf("±æÀÌ´Â %d\n", len);

	for (i = len - 1; i >= 0; i--)
		printf("%c\n", str[i]);
	/*
	for (i = 0; i < length; i++)
		printf("%c\n", s[length - i - 1]);
	*/

	return 0;
}