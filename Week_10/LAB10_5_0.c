/*
입력된 정수의 약수를 모두 찾아내어 출력하는 프로그램을 작성하려한다.
(main함수만 사용)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int num;
	int i;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		if (num % i == 0)
			printf("%d\n", i);

	return 0;
}