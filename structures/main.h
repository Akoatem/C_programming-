#ifndef MAIN_H
#define MAIN_H

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
 * car_t - type for car struct
 */
typedef struct car car_t;

#endif /*MAIN_H*/
