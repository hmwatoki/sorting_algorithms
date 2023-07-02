#include "sort.h"
/**
 * swap_ints - swaps the values of two int
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 * return: void
*/
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
 * heapify - heapifies the array
 * @param array: The array to heapify
 * @size: The size of the array
 * @i: The index of the node
 * return:
*/
void heapify(int *array, size_t size, int i)
{
int largest = i;
int left = 2 * i + 1;
int right = 2 * i + 2;
if (left < size && array[left] > array[largest])
largest = left;
if (right < size && array[right] > array[largest])
largest = right;
if (largest != i) {
swap(&array[i], &array[largest]);
heapify(array, size, largest);
}
}
/**
 * heap_sort - sorts an array of int in ascending order using the
 * Heap sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 * return:
*/
void heap_sort(int *array, size_t size)
{
for (int i = size / 2 - 1; i >= 0; i--)
heapify(array, size, i);
for (int i = size - 1; i > 0; i--) {
swap(&array[0], &array[i]);
heapify(array, i, 0);
for (int j = 0; j < size; j++)
printf("%d ", array[j]);
printf("\n");
}
}

