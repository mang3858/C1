/*
느슨한암호비교

프논이 교수는 apple이라는 패스워드를 쓴다.
로그인시 패스워드를 입력할때 자꾸 apple뒤에 뭔가를 붙이는 이상한 습관이 생겼다.
패스워드 입력시 앞부분만 맞으면 로그인 성공을 하도록 <느슨한 패스워드 체킹 시스템>으로 바꾸려한다.

즉 apple을 넣으면 당연히 로그인 성공이지만 apple1, 혹은 appleapple이라고 넣어도 로그인 성공이 되게 하고 싶다.
이러한 느슨한패스워드체킹을 테스트하기위해 패스워드를 3번 입력하게하고 각 패스워드에 대해서 성공하면 1을
실패하면 0을 출력한다.
즉, 세번다 맞는 패스워드이면 111을 앞에것만 맞으면 100, 다 틀리면 000을 출력한다.

실행예 1:
입력) apple apple1 applebb <- 세 개의 입력 모두 패스워드로 성공
출력) 111

실행예 2:
입력) appleee aple bple <- 첫번째 것만 패스워드로 성공
출력) 100
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int getPassWord(char p[], char pp[])
{
	int i, len;

	for (i = 0; p[i] != '\0'; i++)
		if (p[i] != pp[i])
			return 0;
	return 1;
}
int main(void)
{
	char p[6] = "apple";
	char pp[30];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%s", pp);
		printf("%d", getPassWord(p, pp));
	}
	printf("\n");

	return 0;
}