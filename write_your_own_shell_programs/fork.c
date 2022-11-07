#include <unistd.h>
#include <stdio.h>

/**
 * main - write a fork program that returns that child return to parent program
 *
 * Return: always 0 successful or -1 unsuccessful
 */
int main(void)
{
	pid_t pid;

	printf("Before fork i was 1\n");
	
	pid = fork();

	if (pid == -1)
	{
		perror("unsuccessful");
		return (1);
	}
	printf("After fork i became 2\n");
	return (0);
}
