#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	int num;
	long long val = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		val *= i;
		printf("%d! = %lld\n", i, val);
	}

	return 0;
}