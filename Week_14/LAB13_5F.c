/*
LAB13_5 �� ����� �����Լ��� ����Ͽ� �ٽ� �ۼ��Ϸ��Ѵ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
	int binary[8];
	int num, i;
	int bIndex = 0; // binary �迭�� �ε��� 

	printf("Enter ���(<256):");
	scanf("%d", &num);

   // binary �� �������� �ִ� �ڵ带 �߰�, 8 �� ��� �������� ���� �Ųٷ� ����. binary[] <- 0001 
   // ��Ʈ: while�� ���
	
	while (num > 0) {
		binary[bIndex] = num % 2; //binary[bIndex++]
		num /= 2;
		bIndex++;
	}
 
   // binary �� �������� �ٲ� ��, ����Ѵ�(�ռ� ������ reverse, printArray �� ȣ��). 
	reverse(binary, bIndex);
	printArray(binary, bIndex);

	return 0;
}

void printArray(int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d", a[i]); // ���鹮�ھ��� ����ϵ��� ������ printArray �� ����
	printf("\n");

	return;
}
void reverse(int a[], int size) // �� ������ ���Ǹ� �״�� ���
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