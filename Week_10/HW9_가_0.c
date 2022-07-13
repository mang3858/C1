#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i, j, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = num; i > 0; i--) {
		for (j = 0; j < num - i; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}