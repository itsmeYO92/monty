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



void pall(stack_t **h, unsigned int line_number)
{
	stack_t *current;

	(void)(line_number);
	if (!h || *h == NULL)
		return;
	current = *h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
