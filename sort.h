#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*function*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *element, listint_t *element2);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_intgers(int *element, int *element2);
void partition(int *array, size_t low, size_t high, size_t size);
void q_sort(int *array, size_t itretor, size_t rev_itretor, size_t size);
#endif
