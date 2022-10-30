#include "main.h"
#include "pi.h"
#include "euler.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main code
 *
 * Return: Always 0
 */
int main(void)
{
        float f;

        f = (pow(EULER, PI)) + 1;
        printf("%.3f\n", f);
        return (0);
}
