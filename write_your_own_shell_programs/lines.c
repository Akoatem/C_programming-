#include <stdio.h>
#include <stdlib.h>

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	char *buff = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$ ");

	nread = getline(&buff, &len, stdin);
	printf("%s", buff);
	printf("The number of character is: %ld\n", nread);
	free(buff);
	exit(EXIT_SUCCESS);
}

