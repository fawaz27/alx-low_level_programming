#include <stdio.h>
/**
* main - a program that prints the number of arguments passed into it.
* @argc: a count of the arguments supplied to the program.
* @argv: array of pointers to the strings which are those arguments.
* Return: 0 - if success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
