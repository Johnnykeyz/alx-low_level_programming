#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int p = i;

		if (p%2 == 0)
			printf("This number is an even number-----\n");
		else
			printf("This number is an odd number*****\n");
	}
	return 0;
}
