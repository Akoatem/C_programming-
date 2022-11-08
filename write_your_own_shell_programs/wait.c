#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - write a wait program that returns that child return to parent program
 *
 * Return: always 0 successful or -1 unsuccessful
 */
int main(void)
{
        pid_t pid;
        pid_t ppid;

        pid = fork();

        /* if fork fails */
        if (pid == -1)
        {
                perror("unsuccessful");
                return (1);
        }
        /* in child process */
        if (pid == 0)
        {
                
                printf("Child process\n");
        }
        /* in parent process */
        else
        {
                /*ppid = getpid();*/
		wait(NULL);
                sleep(20);
                printf("I am the parent\n");
        }
        return (0);
}
