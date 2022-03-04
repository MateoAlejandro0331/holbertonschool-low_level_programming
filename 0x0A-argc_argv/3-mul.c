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
	int i, mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if ((argc - 1) == 3)
	{
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
