#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//111360238
int max(int *, int);
main()
{
	int value, min, n;
	int a[100];
	printf("�п�J�}�C�j�p: ");
	scanf_s("%d", &n);
	printf("�п�J�Ʀr: \n");
	for (int i = 0; i < n; i++)
	{
		printf("��%d�ӼƦr: ", i+1);
		scanf_s("%d", &a[i]);
	}
	value = max(a, n);
	printf("�̤j�Ȭ�%d\n", value);
}

int max(int *a, int j)
{
	int m;
	if (j == 1)
	{
		return a[0];
	}
	else
	{
		m = max(a, j-1);
	}
	
	if (a[j - 1] > m)
	{
		return a[j - 1];
	}
	else
	{
		return m;
	}
}