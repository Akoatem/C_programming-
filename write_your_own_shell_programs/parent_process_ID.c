#include <unistd.h>
#include <stdio.h>

/**
 * main - add two number and print sum
 * Description: add numbers and print sum, the parent process ID remain unchanged
 *
 * Return: void
 */
int main(void)
{
        int num1 = 14;
        int num2 = 54;
        int sum = num1 + num2;
        pid_t ppid;

        ppid = getppid();
        printf("The sum is: %d\n", sum);
        printf("Get ppid is: %u\n", ppid);

        return (0);
}
