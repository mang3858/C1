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

	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);

	seatTotal = askReservation();
	while (seatTotal != 10)
	{
		processReservation(seats, SIZE, seatTotal);
		printSeats(seats, SIZE);
		seatTotal += askReservation();
	}
	processReservation(seats, SIZE, seatTotal);
	printSeats(seats, SIZE);
}
int askReservation()
{
	int num;
	printf("\n좌석을 예약하시겠습니까?(몇명) ");
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

/*
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h> 
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int
	seatNumber);
int main(void)
{
	int seatChoice;
	int seats[SIZE] = { 0 };
	int i;

	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);

	for (i = 0; i < SIZE; i += seatChoice)
	{
		seatChoice = askReservation();
		processReservation(seats, seatChoice, i);
	}
}
int askReservation()
{
	int choice;
	printf("\n좌석을 예약하시겠습니까?(몇명) ");
	scanf("%d", &choice);
	return choice;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i;

	for (i = 0; i < size; i++)
		s[seatNumber + i] = 1;

	printSeats(s, SIZE);
	return;

}
void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}
*/