#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func(float x, float y);
int main(void)
{
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("%f", func(x, y));
}

double func(float x, float y)
{
	return (pow(sin(x), 2) + pow(cos(y), 2)) * 2;
}