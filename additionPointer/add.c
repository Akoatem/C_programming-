#include <stdio.h>

void add(int *a, int *b, int *sum);
void main()
{
    int a, b;
    int sum = 0;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    add(&a, &b, &sum);
    printf("Sun is %d\n", sum);

}

void add(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}