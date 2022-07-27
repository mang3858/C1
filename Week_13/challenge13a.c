/*
두 개의 단어를 입력받아서 같은가 다른가를 판별하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char str1[81], str2[81];
	int i, same;
	int len1, len2, maxLenth = -1;

	printf("Enter the first word: ");
	scanf("%s", str1);
	printf("Enter the second word: ");
	scanf("%s", str2);

	for (i = 0; str1[i] != '\0'; i++);
	len1 = i;
	for (i = 0; str2[i] != '\0'; i++);
	len2 = i;

	if (len1 > len2)
		maxLenth = len1;
	else
		maxLenth = len2;

	same = 1;
	for (i = 0; i < maxLenth; i++)
		if (str1[i] != str2[i]) {
			same = 0;
			break;
		}

	if (same)
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");

/*
	for (i = 0; str1[i] != '\0' || i = 0; str2[i] != '\0')
		if (str1[i] != str2[i]) {
			same = 0;
			break;
		}
	if (same)
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");
*/

	return 0;
}