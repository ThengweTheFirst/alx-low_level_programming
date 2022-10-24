#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be added
 * 0 = 1st, 1 = 2nd, 2 = 3rd etc for the index.
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n, *hold = *head;
	unsigned int x = 0;

	if (!idx)
	{
		n = malloc(sizeof(listint_t));
		if (!n)
			return (NULL);

		(*n).a = a;
		(*n).next = *head;

		*head = n;

		return (*head);
	}

	while (hold)
	{
		if (x == (idx - 1))
		{
			n = malloc(sizeof(listint_t));
			if (!n)
				return (NULL);
			(*n).a = a;
			(*n).next = (*hold).next;
			(*hold).next = n;
			return (n);
		}
		hold = (*hold).next;
		x++;
	}
	return (NULL);
}
