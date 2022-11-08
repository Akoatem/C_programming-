#include <stdio.h>
#include <stdlib.h>

/**
 * main - write in the main function
 * Description: write a shell program getline to get input from the user
 *
 * Return: 0 on success or -1 if it fails
 */
int main(void)
{
	size_t n = 10;
	/*char *buf = malloc(sizeof(char) * n);*/
	char *buf = NULL; /* we can dynamicallly allocate memory into the buf by itself */

	printf("Enter name: ");
	/* call the getline funct pass address of buf and n */
	getline(&buf, &n, stdin);

	printf("name is %sBuffer size is %ld\n", buf, n);
	/* free buf to prevent memory leak */
	free(buf);

	return (0);
}
