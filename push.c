#include "monty.h"

stack_t *push(stack_t **head, const int n)
{

	stack_t *new = malloc(sizeof(stack_t *));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}



size_t pall(const stack_t *h)
{
	int i = 0;
	const stack_t *current;

	if (!h)
		return (0);
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
