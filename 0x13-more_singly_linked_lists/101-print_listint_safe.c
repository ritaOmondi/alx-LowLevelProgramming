#include "lists.h"
#include <stdlib.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t countN = 1;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
printf("%d\n", slow->n);
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("%d\n", slow->n);
exit(98);
}
countN++;
}
return (countN);
}
