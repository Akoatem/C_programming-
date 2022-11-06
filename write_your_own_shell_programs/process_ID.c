#include <unistd.h>
#include <stdio.h>

/**
 * main - add two number and print sum
 * Description: add numbers and print sum, the process ID keeps adding
 *
 * Return: void
 */
int main(void)
{
        int num1 = 4;
        int num2 = 23;
        int sum = num1 + num2;
        pid_t pid;

        pid = getpid();
        printf("The sum is: %d\n", sum);
        printf("Get pid is: %u\n", pid);

        return (0);
}
