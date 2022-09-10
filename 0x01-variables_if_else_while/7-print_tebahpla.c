#include <stdio.h>

/**
 * main - print all alphabet
 *
 * Description: using the main function
 * this program prints all alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
