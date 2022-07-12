#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	int n;
	int sum;

	i = 0;
	sum = 0;
	while (i < 5) {
		printf("0보다 큰 수를 입력<%d번째>: ", i + 1);
		scanf("%d", &n);

		while (n < 1) {
			printf("0보다 큰 수를 입력<%d번째>: ", i + 1);
			scanf("%d", &n);
		}

		sum += n;
		i++;
	}
	printf("입력된 값의 총 합:%d\n", sum);

	return 0;
}