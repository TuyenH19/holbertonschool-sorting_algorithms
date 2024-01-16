#include "sort.h"

void quick_sort_recursive(int *array, int low, int high);
int lomuto_partition(int *array, int low, int high);

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm
 * @array: The array to be sorted
 * @size: The number of elements in the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1);
}

/**
 * quick_sort_recursive - Recursive function to sort the array
 * @array: The array to be sorted
 * @low: The lowest index of the partition
 * @high: The highest index of the partition
 */

void quick_sort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high);

		quick_sort_recursive(array, low, pivot_index - 1);
		quick_sort_recursive(array, pivot_index + 1, high);
	}
}

/**
 * lomuto_partition - Partitions the array using the Lomuto partition scheme
 * @array: The array to be partitioned
 * @low: The lowest index of the partition
 * @high: The highest index of the partition
 *
 * Return: The index of the pivot after partition
 */

int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, high - low + 1);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, high - low + 1);
	return (i + 1);
}
