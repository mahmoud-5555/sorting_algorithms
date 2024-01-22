#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - function that sorts an array using QuickSort algorithm
 * @array: array of integers
 * @size: number of elements in the array
 * Return: no return value (void)
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 1)
		return;

	partition(array, 0, size - 1, size);
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


/**
 * partition - function to partition the array
 * @array: array of integers
 * @low: the lower index of the subarray
 * @high: the higher index of the subarray
 * @size: the size of the array
 * Return: the partition index
 */
void partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot;
	size_t first_pointer, secand_pointer;

	if (low >= high || (high > size - 1))
		return;

	pivot = array[high];
	first_pointer = low;
	secand_pointer = low;

	for (; secand_pointer < high; secand_pointer++)
	{
		if (array[secand_pointer] <= pivot)
		{
			if (first_pointer != secand_pointer)
			{
				swap_integers(&array[first_pointer], &array[secand_pointer]);
				print_array(array, size);
				secand_pointer++;
			}
			first_pointer++;
		}
	}

	if (first_pointer != high)
	{
		swap_integers(&array[first_pointer], &array[high]);
		print_array(array, size);
	}
	partition(array, low, first_pointer - 1, size);
	partition(array, first_pointer + 1, high, size);

}
