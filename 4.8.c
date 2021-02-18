#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int grade = 0;
	do
	{
		printf("Please input your grade:>");
		scanf("%d", &grade);
	} while (grade<0 || grade>100);
	int corgrade = grade / 10;
	char result = 0;
	switch (corgrade)
	{
	case 10:
	case 9:
		result = 'A';
		break;
	case 8:
		result = 'B';
		break;
	case 7:
		result = 'C';
		break;
	case 6:
		result = 'D';
		break;
	default:
		result = 'E';
		break;
	}
	printf("%c\n", result);
	return 0;
}