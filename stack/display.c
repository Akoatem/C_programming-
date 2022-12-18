#include <stdio.h>
#include <stdlib.h>

/**
 * The stack data elements are displayed in the stack according to the LIFO rule.
 * define LIMIT 100
 */

void display()
{
	int stack[size];
	int top;
	int i;

	if (top == - 1)
	{
		printf("Stack underflow\n"); // Stack is empty
	}
	else if (top > 1)
	{
		printf("The elements of the stack are:\n");
		for(i = top; i >= 0; i--) // top to bottom traversal
		{
			printf("%d\n",stack[i]);
		}
	}
}
