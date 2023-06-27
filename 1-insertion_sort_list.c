#include "sort.h"
 /**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algo
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curr, *next, *prev;
int swapped = 1;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
while (swapped)
{
swapped = 0;
curr = *list;
while (curr->next != NULL)
{
next = curr->next;
if (curr->n > next->n)
{
prev = curr->prev;
curr->next = next->next;
if (next->next != NULL)
next->next->prev = curr;
next->next = curr;
next->prev = prev;
curr->prev = next;
if (prev != NULL)
prev->next = next;
else
*list = next;
swapped = 1;
print_list(*list);
}
else
curr = curr->next;
}
}
}
