#include "sort.h"

/**
 * myswap - data two values
 * @array: data sort input
 * @first: first
 * @second: second
 * @size: size
 */
void myswap(int *array, int first, int second, int size)
{
	int tmp;

	if (array[first] != array[second])
	{
		tmp = array[first];
		array[first] = array[second];
		array[second] = tmp;
		print_array(array, size);

	}

}

/**
 * part - part to a pivot
 * @array: data sort input
 * @left: left
 * @right: right
 * @size: size input
 * Return: the new pivot
 */

int part(int *array, int left, int right, size_t size)
{
	int i = left, j, pivot = array[right];

	for (j = left; j <= right; j++)
	{
		if (array[j] < pivot)
		{
			myswap(array, i, j, size);
			i++;
		}
	}
	myswap(array, i, right, size);

	return (i);
}

/**
 * myquicksort - quick sort algorithm
 * @array: The array to sort
 * @left: left pivot
 * @right: right pivot
 * @size: size input
 */
void myquicksort(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = part(array, left, right, size);
		myquicksort(array, left, pivot - 1, size);
		myquicksort(array, pivot + 1, right, size);

	}
}

/**
 * quick_sort - quick sort algorithm
 * @array: sort data
 * @size: size input
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	myquicksort(array, 0, size - 1, size);
}
