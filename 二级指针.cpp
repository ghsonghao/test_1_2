#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	int* * ppa = &pa;
	int*** pppa = &ppa;

	printf("%d\n", **ppa);
	printf("%d\n", a);
	printf("%d\n", ***pppa);
	return 0;
}