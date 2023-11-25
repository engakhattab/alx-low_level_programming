#include "main.h"

/**
<<<<<<< HEAD
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits you would need to flip to get from one number to
 * another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int count = 0;

	while (xor_value)
	{
		count++;
		/* clear the least significant bit that is set */
		xor_value &= xor_value - 1;
	}

=======
 * flip_bits - gets the number of bits to flip to get from n to m
 * @n: initial number
 * @m: final number
 *
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
>>>>>>> dfef4200c477323ec098bbe5d6f0b0fd34e82182
	return (count);
}
