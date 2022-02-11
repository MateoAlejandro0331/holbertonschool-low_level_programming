#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int i1;
	long long int i2;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(i1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(i2));
	printf("Size of a float: %zu bytes(s)\n", sizeof(f));
	return (0);
}