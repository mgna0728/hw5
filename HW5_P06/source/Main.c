#define _CRT_SECURE_NO_WARNINGS
//111360238
#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int n);
int main()
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = cubeByValue(number);

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubeByValue(int n)
{
	return n * n * n;
}