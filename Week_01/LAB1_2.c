/*
어떤 수(50 이하의 수라고 가정)를 읽어서 
1) 난수를 그 수만큼 발생시켜서 그 중 가장 큰 수를 출력하라.
2) 발생시킨 난수(0 부터 99 까지의)를 보기좋게 출력하고 

- 난수를 발생시킬때 srand(time(NULL))을 일단 주석처리하였다. 난수 발생시 매번 다른 수가
나오도록 하는 것이 맞으나, 아래의 예는 srand(time(NULL))을 사용하지 않고 (의사)난수를
발생시켰다. 답이 맞는 가를 확인한 후 srand(time(NULL))을 활성화 시켜서 실행할때마다 다른 수가
나오도록 하라. 
- 난수를 출력할 때 각 숫자는 5 개의 문자영역을 차지(%5d 사용)하고 오른쪽 줄맞춤 되도록 하라.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int data[50];
	int num, i, max = -1;
	// srand(time(NULL)); // 주어진 실행 결과와 일치하나를 보기위해서 comment 처리함. 
	// 최종 실행시 comment 처리를 취소하고 실행시켜보세요. 
	printf("Enter the number of random numbers:(<= 50): ");
	scanf("%d", &num);
	
	for (i = 0; i < 30; i++) {
		data[i] = rand() % 100;

		if (max < data[i])
			max = data[i];
	}

	printf("최대값은 %d\n", max);
	printf("-----------------------------------\n");
	printf("발생된 난수는\n");
	
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}

	return 0;
}