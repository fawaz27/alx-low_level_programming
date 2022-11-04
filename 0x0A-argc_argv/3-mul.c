#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that multiplies two numbers.
* @argc: a count of the arguments supplied to the program.
* @argv: array of pointers to the strings which are those arguments.
* Return: 0 - if success.
*/

int main(int argc, char *argv[])
{


	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");

	return (0);
}
