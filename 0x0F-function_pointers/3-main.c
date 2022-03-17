#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Get the result
 * @argc: number of arguments
 * @argv: content of the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int (*x)(int, int);
	int num1, num2;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", x(num1, num2));
	return (0);
}
