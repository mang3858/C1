/*
word제외 알파벳나열

단어(길이가 20 미만인)를 읽어들인후
그 단어에 속하지 않은 문자들로 A부터 Z까지 나열하는 프로그램을 작성하라.

즉, BOY를 단어로 입력받으면, B, O, Y를 제외한 나머지 알파벳을 다음과 같이 공백없이 나열한다.
ACDEFGHIJKLMNPQRSTUVWXZ

힌트:
- 문자열 w안에 ch가 있으면 1을 없으면 0을 반환하는 함수를 정의하여 main함수에서 호출하여 사용한다.
(물론 사용 안해도 됨)

int is_in(char w[], char ch);
실행예:
입력)
BOY
출력)
ACDEFGHIJKLMNPQRSTUVWXZ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_in(char w[], char ch)
{
	int i;

	for (i = 0; w[i] != '\0'; i++) 
		if(w[i] == ch)
			return 1;
	return 0;
}

int main(void)
{
	char word[21];
	int i;

	scanf("%s", word);

	for (i = 'A'; i<= 'Z'; i++) 
		if (is_in(word, i) == 0)
			printf("%c", i);
	printf("\n");

	return 0;
}