#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//111360238

void cubeByBeference(int &nPtr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByBeference(number);

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByBeference(int &nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}