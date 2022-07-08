/*
key값이 일련의 수에 포함되어있는가(몇번째)를 판별하는 문제이다.
수의 개수 n과 key값을 입력받은 후
n개의 수를 입력받아서
n개의 수중 key값이 어디(몇번째)에 포함되어있는가를 출력하는 프로그램을 작성하라.
key가 여러 개 포함되어 있을 경우 앞에 나타난 것의 위치를 출력한다.
key가 일련의 수 안에 없는 경우 not found를 출력한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, key, num;
	int i;
	int found;

	scanf("%d", &n);
	scanf("%d", &key);

	found = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &num);

		if (num == key) {
			found = 1;
			break;
		}
	}

	if (found)//found == 1
		printf("%d\n", i+1);//cnt가 i랑 똑같이 가고 있으니까 불필요 
	else
		printf("not found\n");

	return 0;
}