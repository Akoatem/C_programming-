#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - write in the main function
 * Description: write a program that create ls -l in shell bash
 *
 * Return: 0 on success and -1 if execve fails
 */
int main(void)
{
	pid_t pid;
	char *argv[] = {"/bin/ls", "-l", NULL}; /* -l is to print in long format, NULL pointer is for end of string */

	pid = fork();
	if (pid == -1)
		return (-1);
	/* check for child process */
	if (pid == 0)
	{
		/* check the return value of exec function call */
		int val = execve(argv[0], argv, NULL);
		if (val == -1)
		perror("Error");
	}
	/* check for parent using the wait function */
	else
	{
		wait(NULL);
		printf("Done with execve\n");
	}
	return (0);
}
