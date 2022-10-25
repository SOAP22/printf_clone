#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for(i=0;i<255;i++)
	{
		printf("%c----->%d\n", i, i);
	}
	return (0);
}
