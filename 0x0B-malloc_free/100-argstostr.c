#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments passed to the program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 * arguments, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}

	l += ac;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}

	return (str);
}
