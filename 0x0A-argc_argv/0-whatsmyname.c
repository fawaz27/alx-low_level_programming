#include <stdio.h>
/**
*main - a program that prints its name, followed by a new line.
*@argc: a count of the arguments supplied to the program.
*@argv: array of pointers to the strings which are those arguments.
*Return: 0 if success.
*/

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s \n", argv[0]);
	return (0);
}
