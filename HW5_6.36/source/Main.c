#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <string.h>
char *reverse(char *str)
{
	int len = strlen(str);
	if (len > 1)
	{
		char temp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		
		reverse(str + 1);
		
		str[len - 1] = temp;
	}
	return str;
}
int main()
{
	char str[100];
	scanf_s("%s", str, 100);
	reverse(str);
	puts(str);
	return 0;
}