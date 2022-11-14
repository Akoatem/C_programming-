#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - write a pid function
 *
 * Return: 0 always
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
