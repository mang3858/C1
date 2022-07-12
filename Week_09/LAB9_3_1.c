/*
 (while 문 : 감시값 제어 반복문)
 여러 개의 성적을 읽어서 그 총점을 계산하는 프로그램을 작성하라. -1 은 성적의 끝을 나타낸다
  
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
	int total = 0;
	
	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	while (score != -1) {
		total += score;
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}
	printf("The total is %d.\n", total);

	return 0;
}
