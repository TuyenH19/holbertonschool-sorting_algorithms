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
	size_t i, new_len;
	int tmp = 0, stop = 0;

	if (array == NULL || size < 2)
		return;

	new_len = size;
	while (stop == 0)
	{
		stop = 1;
		for (i = 0; i < new_len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				stop = 0;
			}
		}
		new_len--;
	}
}
