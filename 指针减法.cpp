#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[0];
	for (i = 0; i < 5; i++)
	{
		printf(" %d\n", *p);
		p = p + 2;
	}
	return 0;
}