#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct car - information about the car
 * @name: the name of the car
 * @class: the type of the car
 * @number: the number of the car
 */

struct car
{
        char *name;
        char *class;
        int number;
};

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
