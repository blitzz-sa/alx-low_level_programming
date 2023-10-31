#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array and fill it with a character.
 * @size: Size of the array.
 * @c: Character to fill the array with.
 *
 * Return: Pointer to the created array, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	/* Check for allocation failure or size 0 */
	if (size == 0 || str == NULL)
		return (NULL);

	/* Fill the array with the specified character */
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
