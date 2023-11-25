#include "main.h"

/**
<<<<<<< HEAD
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
=======
 * clear_bit - sets a bit at a position to 0
 * @n: number to be used
 * @index: position to be cleared
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

>>>>>>> dfef4200c477323ec098bbe5d6f0b0fd34e82182
	*n &= ~(1 << index);
	return (1);
}
