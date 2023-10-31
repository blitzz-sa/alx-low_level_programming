#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory location.
 * @str: Input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
