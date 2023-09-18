#include "main.h"
#include <stdio.h>
/**
 * print_array - the function name.
 * @a: parameter 1
 * @n: parameter 2
 */

void print_array(int *a, int n)

{
	int t;

	for (t = 0; t < n; t++)
	{

		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");

	}

	printf("\n");


}
