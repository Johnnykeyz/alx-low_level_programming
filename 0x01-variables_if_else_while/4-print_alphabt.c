#include <stdio.h>

/**
 * main - prints only some alphabets
 *
 * Description: using main function
 * this program doesn't print some alphabet
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
