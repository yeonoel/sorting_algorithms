#include "sort.h"

/**
 * bubble_sort - sorts an integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the @array
 */
void bubble_sort(int *array, size_t size)
{
	int t, temp;
	size_t i;

	t = 1;

	if (array == NULL || size == 0)
	{
		return;
	}

	while (t)
	{

		t = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				t = 1;
				print_array(array, size);
			}
		}
	}

}
