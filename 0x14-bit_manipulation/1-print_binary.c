#include "main.h"

/**
<<<<<<< HEAD
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
=======
 * *print_binary - prints the binary representation of a number
 * *@n: number to be printed
 * *
 * *Return: void
 * */

>>>>>>> dfef4200c477323ec098bbe5d6f0b0fd34e82182
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
<<<<<<< HEAD
=======

>>>>>>> dfef4200c477323ec098bbe5d6f0b0fd34e82182
	_putchar((n & 1) + '0');
}
