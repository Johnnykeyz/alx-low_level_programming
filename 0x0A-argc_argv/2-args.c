#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to a function
 * @argv: argument vector of pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
