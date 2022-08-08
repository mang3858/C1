/*
palindrome되려면

단어 s를 입력받아(길이가 30미만인)
단어 s의 크기를 유지하면서 s를 palindrome으로 만들려한다.
palindrome으로 만들때 앞에 부분은 유지하면서 필요하면 뒷부분의 문자(들)를 바꾼다.
이떄 바꾸어야하는 문자의 개수도 알고 싶다.

예를 들어 s로 abcdxya를 입력받으면
x -> c
y -> b
로 바꾸면 abcdcba라는 palindrome을 구하게 된다.
이때 2개의 문자를 바꾸어야한다.

실행예:
입력)
abcdxya <- 문자열 s
출력)
2 abcdcba <- 뒷부분에서 두개의 문자를 바꾸어서 abcdcba라는 문자열을 만들수있다
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Palindrome(char s[], int size)
{
	int i, cnt = 0;;

	for (i = 0; i < size / 2; i++) 
		if (s[i] != s[size - i - 1]) {
			s[size - i - 1] = s[i];
			cnt++;
		}
		
	return cnt;
}

int main(void)
{
	char s[30];
	int i, size;

	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++);
	size = i;

	printf("%d ", Palindrome(s, size));
	for (i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);
	printf("\n");

	return 0;
}