#include <stdio.h>
/**
 * swap_int -Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integers to be swapped.
 * Return: Nothing
*/
void swap_int(int *a, int *b)
	/*the function that swaps the vlues of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
