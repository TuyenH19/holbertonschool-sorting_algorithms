#include"sort.h"
/**
 * selection_sort - ascendingly sort an array of integers using selection sort
 * @array: array input
 * @size: size of array
 *
 * Description: print the array after each swap of two elements
*/
void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap, stop;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		stop = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				stop += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (stop != 0)
			print_array(array, size);
	}
}
