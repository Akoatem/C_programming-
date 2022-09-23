#include <stdio.h>
void add(int *a, int *b, int *sum);

/**
 * main - addition of two interger
 * Description: This is a pointer function
 *
 * Return: Always 0 (success)
 */

void main(void)
{
	int a, b;
	int sum = 0;

	printf("Enter two number: ");
	scanf("%d%d", &a, &b);
	add(&a, &b, &sum);
	printf("The sum is %d\n", sum);
}
/**
 * add - Addition of two numbers
 * @a: input integer a
 * @b: input integer b
 * @sum: sum of the integers
 */

void add(int *a, int *b, int *sum)
{
	*sum = *a + *b;
}
