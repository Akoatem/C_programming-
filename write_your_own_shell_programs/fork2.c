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
	
	pid = fork();
	
	if (pid == -1)
	{
		perror("unsuccessful");
		return (1);
	}
	if (pid == 0)
	{
		sleep(5);
		printf("I am a child\n");
	}
	else
		printf("I am a parent\n");
	return (0);
}
