#include"sort.h"
/**
 * bubble_sort - ascendingly sort an array of integers using bubble sort
 * @array: array input
 * @size: size of array
 *
 * Description: print the array after each swap of two elements
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
