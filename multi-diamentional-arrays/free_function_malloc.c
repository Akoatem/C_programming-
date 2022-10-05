#include <stdio.h>
#include <stdlib.h>

int *input()
{
    int *p, i;

    p = (int*)malloc(5*sizeof(int)); // malloc allocate the memory for 5 integer and store the address
    printf("Enter 5 number: ");
    for(i = 0; i < 5; i++)
        scanf("%d", p + i);
    return p; // return the address of the first memory back to the main function
}
int main()
{
    int i, sum = 0;
    int *p = input();

    for(i = 0; i < 5; i++)
        sum += *(p + i);

    printf("sum is: %d\n", sum);
    free(p);
    p == NULL;
    return 0;
}
