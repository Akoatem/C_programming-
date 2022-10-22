#include "main.h"

/**
 * stringArray - declares string using array syntex
 * @str: string to be manipulated
 * Return: nothing
 */
void *stringArray(char *str)
{
	char s[10];
	int i = 0;

	while (*str != '\0')
	{
		s[i] = *str;
		str++;
		i++;
	}
	s[0] = 'B';
}

