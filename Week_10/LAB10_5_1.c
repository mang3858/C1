/*
입력된 정수의 약수를 모두 찾아내어 출력하는 프로그램을 작성하려한다.
(void 함수 추가) 매개변수로 주어진 정수의 약수를 모두 찾아내어 출력하는 void함수 print_divisor()를 작성하여보자. 이 함수를 테스트하기 위한 main()함수를 작성하여 위처럼 실행되게 하라. 
print_divisor의 매개변수는 무엇이고 어떤 타입이어야 하는가?
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void print_divisor(int n);
int main(void)
{
	int num;
	int i;

	printf("Enter a number: ");
	scanf("%d", &num);

	print_divisor(num);

	return 0;
}

void print_divisor(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d\n", i);

	return;
}