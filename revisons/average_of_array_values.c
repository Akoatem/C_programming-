#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _malloc_demo - Function that calculate the average of array valuew
 *
 * Return: average of array values
 */
int _malloc_demo(void)
{
	int *nums;
	int len = 5;
	int avg, i;

	nums = (int *)malloc(sizeof(int) * 5);
	if (nums == NULL) return (-1);
	nums[0] = 3;
	nums[1] = 4;
	nums[2] = 5;
	nums[3] = 10;
	nums[4] = 20;

	i = 0;
	while (i < len)
	{
		avg += nums[i];
		i++;
	}
	avg = avg / len;
	free(nums);

	return (avg);
}
int main(void)
{
	int avg = _malloc_demo();
	printf("The average is: %d\n", avg);
	return (0);
}

