#include "main.h"

/**
  *print_all - print all strings in linked list
  *
  *@head: pointer to first node in linked list
  *
  *Return: number of nodes in list
  */
int print_all(list_t *head)
{
	size_t n = 0;

	while (head != NULL)
	{
		n++;
		if (head->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	return (n);
}
