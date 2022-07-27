/*
문자열의 함수 매개변수 전달

*일반 배열과는 달리 문자열의 경우는 그 크기를 같이 전달 할 필요없다. 
 그 끝이 ‘\0’으로 끝나는 성질을 이용하면 되기 때문이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int strLength(char s[]);
void printUpperCase(char s[]);
int main(void)
{
	char str[81];

	printf("Enter a string:");
	scanf("%s", str);

	printf("길이는 %d\n", strLength(str)); // strLength 호출
	
	printf("대문자만 출력하면\n");
	printUpperCase(str); // printUpperCase 호출

	return 0;
}

int strLength(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return i;
}

void printUpperCase(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");

	return;
}