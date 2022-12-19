#include <stdio.h>
#include <stdlib.h>

/**
 * The stack data elements are displayed in the queue according to the FIFO rule.
 */

void display()
{
	int i;
	if (front == - 1)
	{
		printf("Queue underflow\n");
	}
	else
	{
		printf("The elements of the queue are:\n");
		for (i = front; i <= rear; i++)
			printf("%d\n", queue[i]);
	}
}
