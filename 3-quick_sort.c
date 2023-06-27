#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: the size of the array
 * return: void
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}
/**
 * quick_sort_recursive - sorts an array of integers in ascending order
 * @array: the array to sort
 * @lo: the index of the first element of the partition to sort
 * @hi: the index of the last element of the partition to sort
 * @size: the size of the whole array
 * return: void
*/
void quick_sort_recursive(int *array, int lo, int hi, size_t size)
{
int p;
if (lo < hi)
{
p = partition(array, lo, hi, size);
quick_sort_recursive(array, lo, p - 1, size);
quick_sort_recursive(array, p + 1, hi, size);
}
}
/**
 * partition - sorts an array of integers in ascending order
 * @array: the array to sort
 * @lo: the index of the first element of the partition to sort
 * @hi: the index of the last element of the partition to sort
 * @size: the size of the whole array
 * Return: returns the partition index
*/
int partition(int *array, int lo, int hi, size_t size)
{
int pivot = array[hi];
int i = lo - 1, j, tmp;
for (j = lo; j <= hi - 1; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
}
if (i + 1 != hi)
{
tmp = array[i + 1];
array[i + 1] = array[hi];
array[hi] = tmp;
print_array(array, size);
}
return (i + 1);
}
