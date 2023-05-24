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

/**
 * pint - pint function
 * @stack: stack
 * @line_number: line number
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t	*current;

	current = *stack;
	if (!current)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}
