#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - write a ppid function
 *
 * Return: 0 always
 */
int main(void)
{
        pid_t my_ppid;

        my_ppid = getppid();
        printf("%u\n", my_ppid);
        return (0);
}
