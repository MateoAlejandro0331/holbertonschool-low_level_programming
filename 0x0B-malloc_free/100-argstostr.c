#include <stdlib.h>
#include <stdio.h>

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, size = 0;
	char *strconcat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}

	}
	size++;

	strconcat = malloc(sizeof(char) * (size + ac));
	size = 0;

	if (strconcat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strconcat[size] = av[i][j];
			size++;
		}
		strconcat[size] = '\n';
		size++;
	}
	return (strconcat);
}
