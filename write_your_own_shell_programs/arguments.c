#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int index = 0;

	while (argv[index])
	{
		printf("argv[%d], %s\n", index, argv[index]);
		index++;
	}
	return (0);
}
