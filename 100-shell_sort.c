#include <stdio.h>
#include "sort.h"
/**
 * shell_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
size_t space = 1, i, j;
int tmp;
while (space < size / 3)
space = space * 3 + 1;
while (space > 0)
{
printf("Array at interval %lu: ", space);
for (i = space; i < size; i++)
{
tmp = array[i];
for (j = i; j >= space && array[j - space] > tmp; j -= space)
array[j] = array[j - space];
array[j] = tmp;
}
print_array(array, size);
space /= 3;
}
}
