#include "main.h"
#include "pi.h"
#include "euler.h"
#include <stdio.h>

/**
 * main - main code
 *
 * Return: Always 0
 */
int main(void)
{
        struct car myCar;
        myCar.name = "Mercedes";
        myCar.class= "C";
        myCar.number= 180;
        printf("My car is cool a %s %s %d\n", myCar.name, myCar.class, myCar.number);
        return (0);
}
