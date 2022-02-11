#include <stdio.h>
/**
 * main - return the n value
 * Return: return 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
