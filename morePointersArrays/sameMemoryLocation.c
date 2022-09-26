#include <stdio.h>
#include <stdlib.h>

/**
* pointer variable
* pointing 2 variables to some memory location
* 
*/

int main()
{
    int i = 20;
    int *p, *q

    p = &i;
    q = p;

    printf("%d %d", *p, *q); // both will point to same memory location of 20
    return 0;
}
