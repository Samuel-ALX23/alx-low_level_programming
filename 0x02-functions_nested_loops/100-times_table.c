#include "main.h"
#include <stdio.h>

/**
 *  print_times_table - prints time table with provided number
 *  @n: the provided value by the user.
 *  Return: Always 0 (success)
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= 10; i++)
		{
			printf("%2d x %2d = %2d\n", n, i, n * i);
		}
	}
}
