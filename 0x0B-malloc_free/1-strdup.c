#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: a pointer of the string that you want duplicate.
 * Return:
 *- NULL if str = NULL
 *- returns a pointer to the duplicated string if success.
 *- Else It returns NULL .
*/

char *_strdup(char *str)
{

	char *buffer;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size])
	{
		size++;
	}

	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[size] = '\0';

	return (buffer);
}
