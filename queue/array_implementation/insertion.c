#include <stdio.h>
#include <stdlib.h>

/**
 * Insertion of elements into the queue takes place from the rear end and hence would force the elements to shift forward
 * Inserting an element into the queue is also called enqueue.
 */

void insert()
{
	int element;

	if (rear == limit - 1)
	{
		printf("Queue Overflow\n");
	}
	else
	{
	if (front == - 1)
	front = 0;
	printf("Enter the element to be inserted in the queue: ");
	scanf("%d", &element);
	rear++;
	queue(rear) = element;
	}
}
