/*
아래와 같은 실행을 하는 프로그램을 작성하라. 이상적 몸무게는 (키 – 110)이라 가정하자. 실행예:
Enter your height: 168
Your ideal weight is 58.
Do you want to continue(y/n)? y
Enter your height: 157
Your ideal weight is 47.
Do you want to continue(y/n)? y
Enter your height: 170
Your ideal weight is 60.
Do you want to continue(y/n)? n
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int height;
	char ch;

	do
	{
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Your ideal weight is %d.\n", height - 110);

		while (getchar() != '\n');
		// 이전에 입력문이 있은 다음에 문자를 읽어야할 때
		// 현재의 버퍼에남은 문자(들)을 비우기 위해 필요
		// body 없는 반복문으로 조건 뒤에 반드시 ;
		printf("Do you want to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}