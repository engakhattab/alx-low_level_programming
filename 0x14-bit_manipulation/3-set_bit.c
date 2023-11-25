#include "main.h"

/**
<<<<<<< HEAD
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to set the bit
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
=======
 * set_bit - sets a bit at position to 1
 * @n: number to be used
 * @index: index to be set
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
>>>>>>> dfef4200c477323ec098bbe5d6f0b0fd34e82182
	return (1);
}
