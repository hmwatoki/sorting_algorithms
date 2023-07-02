#include "sort.h"
/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: the size of the array
 * return: void
*/

void shell_sort(int *array, size_t size)
{
size_t gap = 1;
int temp;
if (array == NULL || size < 2)
return;
while (gap < size / 3)
gap = (gap * 3) + 1;
while (gap)
{
for (size_t i = gap; i < size; i++)
{
temp = array[i];
for (size_t j = i; j >= gap && array[j - gap] > temp; j -= gap)
{
array[j] = array[j - gap];
}
array[j] = temp;
}
print_array(array, size);
gap /= 3;
}
}
