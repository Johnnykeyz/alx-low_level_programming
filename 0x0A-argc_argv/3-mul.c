#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments passed to a function, 
 * counts the arguments input
 * @argv: argument vector of pointer to strings
 * stores the strings in an array of char *(strings)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	return (0);
}
