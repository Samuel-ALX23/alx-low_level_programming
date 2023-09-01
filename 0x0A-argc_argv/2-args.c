#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: none
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
