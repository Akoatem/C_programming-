#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - This is function to determine the length of a string
 * @str: string input
 *
 * Return: length of string or -1 if something went wrong
 */
int _strlen(char *str)
{
	int len = 0;
	int i = 0;

	if ( str == NULL)
		return (-1);

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int main(void)
{
	char *str = "i joint Alx to become a better software engineer";
	int len = 0;

	len = _strlen(str);
	printf("The length of the string is: %d\n", len);
	return (0);
}

	

