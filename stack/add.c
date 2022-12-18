#include <stdio.h>
#include <stdlib.h>

/**
 * A stack in C is nothing but a linear data structure that follows the LIFO rule (Last In First Out)
 * In a stack, both insertion and deletion take place from just one end, that is, from the top
 * We can implement a stack in C in 2 ways
 * 1. Statically: Array implementation of stacks allows the static memory allocation of its data elements.
 * 2. Dynamically: Linked list implementation of stacks follow the dynamic memory allocation of its data elements.
 * it is important to determine the size of the stack prior to the program run.
 * In a stack, the operation of inserting an element into the stack is referred to as pushing an element in the stack. The elements are inserted into the stack from the top and hence would compel the elements to shift.
 */

void push()
{
    #define LIMIT 100
	int stack[limit];
	int top;
	int element;

	if (top == limit - 1)
	{
		printf("stack overflow\n");
	}
	else
	{
		printf("Enter element to be inserted: ");
		scanf("%d", element);
		top++;

		stack[top] = element;
	}
}

