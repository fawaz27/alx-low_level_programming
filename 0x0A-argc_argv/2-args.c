#include <stdio.h>
/**
* main - a program that prints all arguments it receives.
* @argc: a count of the arguments supplied to the program.
* @argv: array of pointers to the strings which are those arguments.
* Return: 0 - if success.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
