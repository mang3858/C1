#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num, i;
	int sum = 0;
	int prime;


	scanf("%d", &num);
	while (num != -1)
	{
		prime = 1;

		for (i = 2; i < num; i++) 
			if (num % i == 0) {
				prime = 0;
				break;
			}
		if (prime)
			sum += num;
		scanf("%d", &num);
	}
	printf("%d\n", sum);
	
	return 0;
}