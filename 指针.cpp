#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf(" %d\n", &arr[9] - &arr[0]);
	return 0;
}