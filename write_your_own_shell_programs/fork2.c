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
	pid_t ppid;
	
	pid = fork();
	
	if (pid == -1)
	{
		perror("unsuccessful");
		return (1);
	}
	if (pid == 0)
	{
		sleep(23);
		printf("I am a child\n");
	}
	else
	{
		ppid = getpid();
		printf("Parent pid is: %u\n", ppid);
	}
	return (0);
}
