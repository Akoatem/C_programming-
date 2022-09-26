#include <stdio.h>
#include <stdlib.h>

/**
* pointer using min and max values of arrays
* print the min and max values using pointers of an array
*
*/

void minMax(int arr[], int len, int *min, int *max);
int main()
{
    int b[] = {21,34,53,65,11,56,203,7,26,302,654,958,8,5,1};
    int min, max;

    int len = sizeof(b)/sizeof(b[0]); //size of the whole array / by size of the first element
    minMax(b, len, &min, &max);   // passing of the whole array
    printf("Min value of array is: %d and max value of array is: %d\n", min, max);

    return 0;
}

void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];  // here we are dealing with the pointer variables instead of actual variables
    int i;

    for(i = 0; i < len; i++){
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }

}
