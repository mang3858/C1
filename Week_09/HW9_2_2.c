/*
학생수, 총점, 평균, 가장 좋은 점수을 출력하도록 프로그램을 작성하라.
version 2
  while (1)
  {
		input 을 읽는다;
		if (input 이 감시값이면)
			break;
		반복 부분;
  }
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	int total;
	double ave;
	int max = -1;
	int cnt;

	total = 0;
	cnt = 0;
	while (1) {
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);

		if (score == -1)
			break;
		total += score;
		cnt++;

		if (max < score)
			max = score;
	}
	printf("You’ve entered %d students.\n", cnt);
	if (cnt == 0)
		printf("There is no data.\n");
	else {
		printf("The total is %d.\n", total);
		printf("The average is %.1f\n", (double)total / cnt);
		printf("The best score is %d.\n", max);
	}

	return 0;
}