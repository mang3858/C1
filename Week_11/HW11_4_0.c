/*
입력받은 정수(2이상)가 소수(prime number)인지를 검사하여 "소수이다" 혹은 "소수가 아니
다"를 출력하도록 프로그램을 작성하라. 
이때는 main 함수만 사용한다. 
실행예는 아래와 같다.

실행예 1
Enter a number: 8
소수가 아닙니다.

실행예 2
Enter a number: 13
소수입니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i, j;
	int num;
	int prime;

	printf("Enter a number: ");
	scanf("%d", &num);

	prime = 1;
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			prime = 0;
			break;
		}
	}

	if (prime == 1)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");
}