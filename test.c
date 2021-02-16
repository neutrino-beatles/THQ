#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<math.h>

int main()
{
	int n = 10;
	float r = 0.07;
	float p = 1.0f;
	//p = pow(1 + r, n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		p *= (1 + r);
	}
	printf("%f\n", p);
	return 0;
}