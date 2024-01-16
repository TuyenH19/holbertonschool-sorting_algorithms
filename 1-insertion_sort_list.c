#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order using
 *                        the Insertion Sort algorithm.
 * @list: A pointer to a pointer to the head of the list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *courant, *trie, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	courant = (*list)->next;

	while (courant != NULL)
	{
		trie = courant->prev;
		temp = courant;

		while (trie != NULL && trie->n > temp->n)
		{
			if (temp->next != NULL)
				temp->next->prev = trie;
			trie->next = temp->next;
			temp->prev = trie->prev;
			temp->next = trie;
			trie->prev = temp;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;

			print_list(*list);

			trie = temp->prev;
		}

		courant = temp->next;
	}
}
