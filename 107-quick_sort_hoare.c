#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort_hoare - function that sorts an array using QuickSort algorithm
 * @array: array of integers
 * @size: number of elements in the array
 * Return: no return value (void)
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	partition_h(array, 0, size - 1, size);
}

/**
 * swap_integers - function to swap two integers
 * @element1: the first integer
 * @element2: the second integer
 * Return: no return value
 */
void swap_integers(int *element1, int *element2)
{
	int temp;

	temp = *element1;
	*element1 = *element2;
	*element2 = temp;
}

void partition_h(int *array, size_t low, size_t high, size_t size)
{
	int pivot;
	size_t first_pointer, secand_pointer, pivot_index;

	if (low >= high || (high > size - 1))
		return;

	pivot_index = ((high - low) / 2) + low;
	pivot = array[pivot_index];
	first_pointer = low;
	secand_pointer = high;

	while (low > high)
	{
		if 
	}


}
