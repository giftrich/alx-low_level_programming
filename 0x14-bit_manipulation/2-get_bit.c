#include "main.h"
/**
 * get_bit - gets bit a certain index of all numbers
 * @n: bits
 * @index: is the index, starting from 0 of the bit you  are in need for to get
 * Return: returns the value of a bit at a given index pos.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);/*Error: index out of range*/
	}

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
