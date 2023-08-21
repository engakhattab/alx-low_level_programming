#include "main.h"

/**
 *swap_int - swap value two parameters
 *@a: input parameter 1
 *@b: input parameter 2
 *
 * return:0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;


}
