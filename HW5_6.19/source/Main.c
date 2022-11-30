#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//111360238

int sum[36];
int main(void)

{

	int dice1, dice2;
	for (int q = 0; q < 36; q++)
	{
		sum[q] = 0;
	}

	srand(time(NULL));

	for (int i = 0; i < 36000; i++)

	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;

		for (int k = 0; k < 6; k++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (dice1 == j + 1 && dice2 == k + 1)
				{
					sum[(j + 1) + (6 * k) - 1] = sum[(j + 1) + (6 * k) - 1] + 1;
				}
			}
		}
	}

	printf("     1       2      3      4      5      6\n\n");
	printf("1  %5d %5d %6d %6d %7d %7d\n", sum[0], sum[1], sum[2], sum[3], sum[4], sum[5]);
	printf("2  %5d %5d %6d %6d %7d %7d\n", sum[6], sum[7], sum[8], sum[9], sum[10], sum[11]);
	printf("3  %5d %5d %6d %6d %7d %7d\n", sum[12], sum[13], sum[14], sum[15], sum[16], sum[17]);
	printf("4  %5d %5d %6d %6d %7d %7d\n", sum[18], sum[19], sum[20], sum[21], sum[22], sum[23]);
	printf("5  %5d %5d %6d %6d %7d %7d\n", sum[24], sum[25], sum[26], sum[27], sum[28], sum[29]);
	printf("6  %5d %5d %6d %6d %7d %7d\n", sum[30], sum[31], sum[32], sum[33], sum[34], sum[35]);
	system("pause");
	return 0;
}