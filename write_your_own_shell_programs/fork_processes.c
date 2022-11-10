#include <unistd.h>
#include <stdio.h>

/**
 * main - This is for the main function
 * Description: write a function using fork process use for inter-process communication in networking
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success or -1 fails
 */
int main(int argc, char *argv[])
{
	pid_t pid;
	int count1 = 0;
	int count2 = 0;
	
	printf("Before it forks\n");
	sleep(5);

	pid = fork();

	if (pid == -1)
		perror("Errro");

	if (pid == 0)
	{
		printf("This is a child process\n");
		while (count1 < 10)
		{
			printf("Child process: %d\n", count1);
			sleep(1);
			count1++;
		}
	}else {
		printf("This is a parent process\n");
		while (count2 < 10)
		{printf("Parent process: %d\n", count2);
			sleep(1);
			count2++;
		}
	}
	return (0);
}

