#include <stdio.h>

/**
 * main - pints all numbers
 *
 * Description: using the main function
 * this program prints all the numbers 0 to 9
 * Return: 0
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
