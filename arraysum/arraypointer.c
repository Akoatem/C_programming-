#include <stdio.h>

/**
 * main - sum of array pointer
 * Description: sum of array using pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int a[] = {23, 56, 12, 68, 39, 10, 45, 20, 67, 34, 90};
	int sum = 0;
	int *p;

	for (p = &a[0]; p <= &a[10]; p++)
		sum += *p;
	printf("The sum of array is: %d\n", sum);
}
