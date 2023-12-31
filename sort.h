#ifndef _LISTINT_H_
#define _LISTINT_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Int stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
void cocktail_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_recursive(int *array, int lo, int hi, size_t size);
int partition(int *array, int lo, int hi, size_t size);
void shell_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);
void heapify(int *array, size_t size, int i);
void swap(int *a, int *b);
void heap_sort(int *array, size_t size);
#endif /* _LISTINT_H_ */
