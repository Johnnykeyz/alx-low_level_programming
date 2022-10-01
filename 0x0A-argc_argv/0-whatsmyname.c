#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to a function
 * @argv: argument vector of pointer to strings
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
