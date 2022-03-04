#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *@argc: arguments of the funtion
 *@argv: argumentes of the funtion
 *Return: always cero.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
