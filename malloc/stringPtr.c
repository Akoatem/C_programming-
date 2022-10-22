#include "main.h"

/**
 * stringPtr - manipulates a string using pointer notation
 * @strL string to be manipulated
 *
 * Return: nothing
 */
void *stringPtr(char *str)
{
	char *s;

	s = str;
	*s = 'B';
}
