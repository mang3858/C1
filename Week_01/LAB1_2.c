/*
� ��(50 ������ ����� ����)�� �о 
1) ������ �� ����ŭ �߻����Ѽ� �� �� ���� ū ���� ����϶�.
2) �߻���Ų ����(0 ���� 99 ������)�� �������� ����ϰ� 

- ������ �߻���ų�� srand(time(NULL))�� �ϴ� �ּ�ó���Ͽ���. ���� �߻��� �Ź� �ٸ� ����
�������� �ϴ� ���� ������, �Ʒ��� ���� srand(time(NULL))�� ������� �ʰ� (�ǻ�)������
�߻����״�. ���� �´� ���� Ȯ���� �� srand(time(NULL))�� Ȱ��ȭ ���Ѽ� �����Ҷ����� �ٸ� ����
�������� �϶�. 
- ������ ����� �� �� ���ڴ� 5 ���� ���ڿ����� ����(%5d ���)�ϰ� ������ �ٸ��� �ǵ��� �϶�.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int data[50];
	int num, i, max = -1;
	// srand(time(NULL)); // �־��� ���� ����� ��ġ�ϳ��� �������ؼ� comment ó����. 
	// ���� ����� comment ó���� ����ϰ� ������Ѻ�����. 
	printf("Enter the number of random numbers:(<= 50): ");
	scanf("%d", &num);
	
	for (i = 0; i < 30; i++) {
		data[i] = rand() % 100;

		if (max < data[i])
			max = data[i];
	}

	printf("�ִ밪�� %d\n", max);
	printf("-----------------------------------\n");
	printf("�߻��� ������\n");
	
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}

	return 0;
}