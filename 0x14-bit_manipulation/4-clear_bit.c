#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number input.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
int add;
if (index > 63)
return (-1);
add = 1 << index;
*n = *n & (~add);
return (1);
}
