#include <stdio.h>
#include <stdlib.h>

/**
 * In a queue, the deletion of data elements is done from the front
 * Deleting the element from the queue is also called dequeue.
 */

void delete()
{
	if (front == - 1 || front > rear)
	{
		printf("Queue Underflow \n");
	}
	else
	{
		printf("The deleted element in the queue is: %d\n", queue[front]);
		front++;
	}
}
