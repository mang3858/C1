/*
학생수, 총점, 평균, 가장 좋은 점수을 출력하도록 프로그램을 작성하라.
version 1
  input을 읽는다;
  while (input 이 감시값이 아닌동안)
  {
		반복 부분;
		input을 읽는다;
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

	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	total = 0;
	cnt = 0;
	while (score != -1) {
		total += score;
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
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