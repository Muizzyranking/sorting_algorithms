#include "sort.h"

/**
* counting_sort - sorts an array of integers in ascending order
* @array: array to sort
* @size: size of the array
*/

void counting_sort(int *array, size_t size)
{
	int *count, *output, max, i;

	if (array == NULL || size < 2)
		return;

	max = get_max(array, size);
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;

	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(output);
		return;
	}

	for (i = 0; i <= (max + 1); i++)
		count[i] = 0;

	for (i = 0; i < (int)size; i++)
		count[array[i]]++;

	for (i = 1; i <= max + 1; i++)
		count[i] += count[i - 1];

	print_array(count, max + 1);

	for (i = 0; i < (int)size; i++)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}

	for (i = 0; i < (int)size; i++)
		array[i] = output[i];

	free(count);
	free(output);
}

/**
* get_max - get the maximum value of an array
* @array: array to get the maximum value
* @size: size of the array
* Return: maximum value of the array
*/

int get_max(int *array, int size)
{
	int max = array[0], i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}
