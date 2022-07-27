/*
LAB13_5 를 사용자 정의함수를 사용하여 다시 작성하려한다
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
	int binary[8];
	int num, i;
	int bIndex = 0; // binary 배열의 인덱스 

	printf("Enter 양수(<256):");
	scanf("%d", &num);

   // binary 에 이진수를 넣는 코드를 추가, 8 의 경우 이진수의 값이 거꾸로 저장. binary[] <- 0001 
   // 힌트: while문 사용
	
	while (num > 0) {
		binary[bIndex] = num % 2; //binary[bIndex++]
		num /= 2;
		bIndex++;
	}
 
   // binary 를 역순으로 바꾼 후, 출력한다(앞서 정의한 reverse, printArray 를 호출). 
	reverse(binary, bIndex);
	printArray(binary, bIndex);

	return 0;
}

void printArray(int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d", a[i]); // 공백문자없게 출력하도록 원래의 printArray 를 수정
	printf("\n");

	return;
}
void reverse(int a[], int size) // 앞 문제의 정의를 그대로 사용
{
	int i;
	int temp;

	for (i = 0; i < size / 2; i++) {
		temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
	}

	return;
}