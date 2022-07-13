/*
print5Chars 함수를 사용하여 아래처럼 실행되도록 프로그램하라 .
 *****
 +++++
 11111
*/
// 매개변수를 가지는 void 함수를 사용한 프로그램 연습
#include <stdio.h> 
void print5Chars(char ch); // 함수의 원형
int main(void)
{
	print5Chars('*'); // 함수의 호출
	print5Chars('+');
	print5Chars('1');

	return 0;
}
void print5Chars(char ch) // 함수의 정의: 주어진 문자를 5 번쓰는 함수를 정의
{
	int i;

	for (i = 0; i < 5; i++)
		printf("%c", ch);
	printf("\n");

	return;
}