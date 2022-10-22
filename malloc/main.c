#include "main.h"

/**
 * msin - This is a function to print out string and array using pointer
 * @argc: number of cmdline arguments
 * @argv: argument vector
 *
 * Return: Always 0 unless error
 */
int main(int argc, char **argv)
{
	/** do a validation check*/
	if (argc < 2)
	{
		printf("you have to enter a word\n");
		return (1);
	}
	printf("This ALX solfware engineering course is awaresom\n");
	stringPtr(argv[1]);
	stringArray(argv[1]);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}


