#include <stdio.h>

/**
 * main - prints the name ofthe file it was compiled from
 *
 * Return: nothing
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
