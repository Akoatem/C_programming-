#include <stdio.h>
#include <stdlib.h>

/**
* Returning Pointers
* https://www.youtube.com/watch?v=NVH4K-0O39E&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=106
*
*/

int *findMid(int a[], int n);
int main()
{
    int a[]= {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a, n);

    printf("%d", *mid);
    return 0;
}

int *findMid(int a[], int n)
{
    return &a[n/2];
}