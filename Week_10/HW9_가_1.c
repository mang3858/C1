#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i, j, num;
	char b;

	printf("Enter a number: ");
	scanf("%d", &num);

	b = " ";
	for (i = num; i > 0; i--) {
		for (j = 0; j < i; j++) 
			printf("*");
		printf("\n");
	}

	return 0;
}