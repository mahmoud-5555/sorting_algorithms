#include "sort.h"

/**
* shell_sort - impleminting shell_sort algorithm
*
* @array: array of ints
* @size: size of array
* Return: Always 0 (Success)
*/

void shell_sort(int *array, size_t size)
{
	size_t j, x, gap = 1;
	int i;

	for (; gap < size / 3; gap = (gap * 3) + 1)
	{
		;
	}
		while (gap > 0)
	{
		for (j = gap; j < size; j++)
		{
			for (i = j - gap; i >= 0; i = i - gap)
			{
				if (array[i + gap] < array[i])
				{
					x = array[i];
					array[i] = array[i + gap];
					array[i + gap] = x;
				}
				else
					break;

			}
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}

}
