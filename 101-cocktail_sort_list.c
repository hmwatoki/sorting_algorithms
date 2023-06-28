#include "sort.h"
/**
 * swap_nodes - swaps nodes
 * @list
 * @node1
 * @node2
 * 
*/
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
if (node1->prev)
node1->prev->next = node2;
if (node2->next)
node2->next->prev = node1;
if (node1->next != node2)
node1->next = node2->next;
if (node2->prev != node1)
node2->prev = node1->prev;
if (node2->prev == NULL)
*list = node2;
}
/**
 * cocktail_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Cocktail sort algo
 * @list
 * return: void
*/

void cocktail_sort_list(listint_t **list)
{
int swapped;
listint_t *current;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

do {
swapped = 0;
for (current = *list; current != NULL && current->next != NULL; current = current -> next) {
if (current -> n > current -> next -> n) {
swap_nodes(list, current, current -> next);
print_list(*list);
swapped = 1;
}
}

if (!swapped) 
break;
swapped = 0;
for (current = (*list)->prev; current != NULL && current -> prev != NULL; current = current -> prev) {
if (current -> n < current -> prev -> n) {
swap_nodes(list, current -> prev, current);
print_list(*list);
swapped = 1;
}
}
} while (swapped);
}
