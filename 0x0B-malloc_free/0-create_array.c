#include "main.h"
#include<stdlib.h>
/**
 * create_array - creates an array of chars, and initializes.
 * @size: the size of an array.
 * @c: the char that you want to initializes an array.
 * Return:
 *- NULL if size = 0
 *- a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
