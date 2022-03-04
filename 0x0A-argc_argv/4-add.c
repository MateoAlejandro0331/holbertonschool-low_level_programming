#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 *@argc: arguments of the funtion
 *@argv: argumentes of the funtion
 *Return: always cero.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 1)
		{
			printf("0\n");
		}
		else
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
