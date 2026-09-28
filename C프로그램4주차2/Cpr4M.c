#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int scores[SIZE] = { 0 };
	int i, maximum;

	printf("---------------------------------------\n");
	for (i = 1; i <= SIZE; i++)
		printf("%-3d ", i);
	printf("\n");
	printf("---------------------------------------\n");

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		scores[i] = (rand() % 100) + 1;
		printf("%-3d ", scores[i]);
	}
	printf("\n\n");

	maximum = scores[0];
	for (i = 1; i < SIZE; i++)
	{
		if (scores[i] > maximum)
			maximum = scores[i];
	}
	printf("최대값은 %d입니다.\n", maximum);
	return 0;
}