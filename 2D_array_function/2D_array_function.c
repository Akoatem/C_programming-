#include <stdio.h>
#include <stdlib.h>

/**
 * 2D_array_function - A 2D array function using pointer
 * @n: numer of rows
 * @m: number of columns
 * @fill_value: in fill value
 *
 * Return: A point matrix
 */

int **create_matrix(int m, int n, int fill_value)
{
	int **matrix;/** this variable store a poiter to poiter address*/

	matrix = malloc(sizeof(int *) * m); /**matrix store the address for n*/
	for (int i = 0; i < m; i++) /** this allocate space for each row*/
		matrix = malloc(sizeof(int) * n);
	for (int i = 0; i < m; i++) /**this is for fill in value*/
		for (int j = 0; j < n; j++) /** this is for 2D array nested loop*/
			matrix[i][j] = fill_value;
	return (matrix); /**return matrix to that address*/
}
/**
 * main - call the function to the main
 * Description: The 2D function is call
 *
 * Return: nothing
 */
int main(void)
{
	int **matrix;
	int n = 4;
	int m = 3;

	matrix = create_matrix(m, n, 8);
	for (int i = 0; i < m; i++) /** this loop access the 2D array*/
	{
		for (int j = 0; j < n; j++)
			printf("%d", matrix[i][j]); /** this execute all the values of n & m*/
		printf("\n");
	}
	for (int i = 0; i < m; i++) /** this loop free the allocated memory*/
		free(matrix[i]);
	free(matrix); /** this prevent memory leak from our program*/
}


