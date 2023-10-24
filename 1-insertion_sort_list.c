#include "sort.h"

/**
 * node_swp - swaps two nodes in a doubly linked list.
 *
 * @head: pointer to the head of the linked list.
 * @first_node: pointer to the first node to be swapped.
 * @second_node: pointer to the second node to be swapped.
 */
void node_swp(listint_t **head, listint_t **first_node, listint_t *second_node)
{
(*first_node)->next = second_node->next;

if (second_node->next != NULL)
{
second_node->next->prev = *first_node;
}
second_node->prev = (*first_node)->prev;
second_node->next = *first_node;

if ((*first_node)->prev != NULL)
{
(*first_node)->prev->next = second_node;
}
else
{
*head = second_node;
}
(*first_node)->prev = second_node;
*first_node = second_node->prev;
}


/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: pointer to a liked lists.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curr_node, *inserted_node, *tmp_node;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}

for (curr_node = (*list)->next; curr_node != NULL; curr_node = tmp_node)
{
tmp_node = curr_node->next;
inserted_node = curr_node->prev;
while (inserted_node != NULL && curr_node->n < inserted_node->n)
{
node_swp(list, &inserted_node, curr_node);
print_list((const listint_t *)*list);
}
}
}
