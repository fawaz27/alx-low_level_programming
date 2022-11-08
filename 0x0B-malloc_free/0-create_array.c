#include "main.h"
#include<stdlib.h>
#include<stdio.h>
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

	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}

	return (buffer);
}
