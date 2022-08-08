/*
문자열(길이 80이하)그 안에 존재하는 숫자들의 총합을 계산하여 출력하는 프로그램을 작성하라.
실행예는 앞의 문제와 같다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int addNumbers(char s[]);
int main(void)
{
	char word[81];
	int i;

	//printf("Enter one word: ");
	scanf("%s", word);

	printf("%d\n", addNumbers(word));

	return 0;
}
int addNumbers(char s[]) // 이 함수만 제출
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= '0' && s[i] <= '9')
			sum += s[i] - '0';
	
	return sum;
}