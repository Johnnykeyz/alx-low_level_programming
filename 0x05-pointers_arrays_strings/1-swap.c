#include "main.h"

/**
*swap_int - swaps two integers' values
*@a: firsr integer
*@b: second integer
*Return: returns nothing
*/

void swap_int(int 8a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
