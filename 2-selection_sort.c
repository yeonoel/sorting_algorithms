#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array to sorted
 * @size: The size of the @array
 */
void selection_sort(int *array, size_t size)
{
	int temp, flag;
	size_t i, j, position;


	if (!array || size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		flag = 0;
		position = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[position])
			{
				position = j;
				flag = 1;
			}
		}
		if (flag)
		{
			temp = array[i];
			array[i] = array[position];
			array[position] = temp;
			print_array(array, size);
		}
	}
}
