#include <stdlib.h>
#include "main.h"

/**
 *
 */
void print_str(void (*cb) (void))
{
	cb();
}
void callback(void)
{
	printf("Mary and John are doing great\n");
}
int main(void)
{
	void (*ptr_function) (void) = &callback;
	print_str(ptr_function);
	return (0);
}

