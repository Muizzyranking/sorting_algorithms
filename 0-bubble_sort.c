#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, len;
	int temp, bool = 0;

	if (array == NULL || size < 2)
		return;

	while (!bool)
	{
		bool = 1;
		for (i = 0, len = size - 1; i < len; i++)
		{
			if (array[i] > array[i + 1])
			{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			bool = 0;
			print_array(array, size);
			}
		}
		len -= 1;
	}

}
