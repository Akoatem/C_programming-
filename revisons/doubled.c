#include "main.h"

/**
 * doubled - write a function that double numbers
 * @num: integer
 *
 * Return: doulbled number
 */
int doubled(int *num)
{
	int *ptr;

	ptr = num;

	return (*ptr * 2);
}
/**
 * main - calls other functions
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 5;

	printf("The number doubled is: %d\n", doubled(&num));
	return (0);
}
