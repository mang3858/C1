#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h> 

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void)
{
	int seatTotal = 0;
	int seats[SIZE] = { 0 };

	printf("******�¼� ���� �ý���******\n");
	printSeats(seats, SIZE);

	seatTotal = askReservation();
	while (seatTotal != 10)
	{
		processReservation(seats, SIZE, seatTotal);
		printSeats(seats, SIZE);
		seatTotal += askReservation();

		if (seatTotal > 10) {
			printf(">>>%d���� ���� �ȵ�\n", seatTotal - 10);
			break;
		}
	}
	processReservation(seats, SIZE, seatTotal);
	printSeats(seats, SIZE);
}
int askReservation()
{
	int num;
	printf("\n�¼��� �����Ͻðڽ��ϱ�?(���) ");
	scanf("%d", &num);
	return num;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i;
	for (i = 0; i < seatNumber; i++)
		if (s[i] == 0)
			s[i] = 1;
}
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < SIZE; i++)
		printf("%2d", s[i]);
	printf("\n");
}
