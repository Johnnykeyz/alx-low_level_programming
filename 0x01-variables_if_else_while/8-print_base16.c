#include <stdio.h>

/**
 * main - prints all numbers and a to f
 *
 * Description: using the main function
 * this program prints all the numbers 0 to 9 and a to f
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
for (n = 'a'; n <= 'f'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
