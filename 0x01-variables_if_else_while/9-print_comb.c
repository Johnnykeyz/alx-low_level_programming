#include <stdio.h>

/**
 * main - pints all numbers
 *
 * Description: using the main function
 * this program prints all the numbers 0 to 9 with comma
 * Return: 0
 */
int main(void)
{
int n;
putchar('0');
for (n = '1'; n <= '9'; n++)
{
	putchar(',');
	putchar(n);
}
putchar('\n');
return (0);
}
