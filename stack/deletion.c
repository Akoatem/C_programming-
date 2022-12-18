#include <stdio.h>
#include <stdlib.h>

/**
 * https://data-flair.training/blogs/stacks-and-queues-in-c/
 * In a stack, the operation of deleting an element into the stack is referred to as popping an element in the stack.
 * The deletion of a data element from the stack is done from the top.The deletion of a data element from the stack is done from the top.The deletion of a data element from the stack is done from the top.
 */

void pop()
{
#define LIMIT 100
	int stack[limit];
	int top;
	int element;

	if (top == - 1)
	{
		printf("stack overflow\n");
	}
	else
	{
		element = stack[top];
		printf("The deleted element is %d", stack[top]);
		top--;
		// The element below the topmost element is deleted
	}
}
