#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - write the main function
 * Description: write a program using string tokan
 *
 * Return: 0 on success
 */
int main(void)
{
	/*char str[] = "Jesus is my Boss";*/
	char *src = "ALX program is awareson to partake";
	/*if not using arrays use malloc to allocate memomery*/
	char *str = malloc(sizeof(char) * strlen(src));
	char *delim = " ";/* creating white space between characters*/
	char *token;

	strcpy(str, src);

	token = strtok(str, delim);
	/*printf("%s ", token);*/
	/*To print out the next char on the string use a NULL in the token than str*/
	/* you cant repeat this many time, instead use a while loop*/
	while (token != NULL)
	{
		printf("%s ", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
