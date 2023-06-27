#include <stdio.h>
/**
 * shell_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
size_t space = 1, j, i;
int tmp;
while (space < size / 3)
space = space * 3 + 1;
while (space > 0)
{
for (i = space; i < size; i++)
{
tmp = array[i];
for (j = i; j >= space && array[j - space] > tmp; j -= space)
array[j] = array[j - space];
array[j] = tmp;
}
space = (space - 1) / 3;
printf("Array after decreasing the interval by %lu: ", space);
for (i = 0; i < size; i++)
printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");
}
}
