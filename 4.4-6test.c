#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//4.6
int main()
{
	int x = 0;
	printf("Input x:>");
	scanf("%d", &x);
	if (x < 1)
		printf("%d\n", x);
	else if (x >= 1 && x < 10)
		printf("%d\n", 2 * x - 1);
	else
		printf("%d\n", 3 * x - 10);
	return 0;
}


//4.4
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = a;
//	printf("Please input a,b,c:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > max)
//		max = b;
//	if(c > max)
//		max = c;
//	printf("%d\n", max);
//	return 0;
//}