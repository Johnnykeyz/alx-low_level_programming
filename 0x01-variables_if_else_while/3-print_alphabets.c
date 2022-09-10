#include <stdio.h>

/**
 * main - prints alphabets capital letter
 *
 * Description: using main function
 * this program prints all the alphabet in CAPITAL LETTER
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
