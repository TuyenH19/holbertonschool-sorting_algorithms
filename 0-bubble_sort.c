#include"sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: array input
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp = 0;

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
