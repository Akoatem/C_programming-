#include "main.h"

/**
 * main - calls other function
 *
 * Return: always 0
 */
int main(void)
{
	int len;
	/* because _printf will return the length of the string as an int*/
	len = _printf("Test string");
	return (0);
}
