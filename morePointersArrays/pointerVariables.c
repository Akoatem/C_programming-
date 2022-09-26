#include <stdio.h>
#include <stdlib.h>

/**
* pointer variable
* pointing a memory location of an integer
* https://www.youtube.com/watch?v=xlt_bEqfnxg&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=103
*/

int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("%d", ptr);
    return 0;
}
