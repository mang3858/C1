/*
학생수를 입력 받은 후, 그 수만큼 성적을 입력 받아 총점과 평균을
계산하여 출력하는 프로그램을 작성하라. 학생수는 최대 40 명이라고 가정하자. 학생수는 0 초과 40 이하라고 가정하자.
(이런 경우는 최대의 개수로 배열의 크기를 잡는다. 40 명 미만의 학생을 처리할 때는 배열의 뒷부분은
사용되지 않는다)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int scores[40];
	int i, n;
	int total = 0;
	int ave;
	
	printf("Enter the number of scores(0 < number <= 40):");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
	}

	printf("------------------------\n");

	for (i = 0; i < n; i++)
		total += scores[i];
	ave = total / n;
		
	printf("Total: %d\n", total);
	printf("Average: %d\n", ave);

	for (i = 0; i < n; i++)
		printf("%d ", scores[i]);
	printf("\n");
	
	return 0;
}