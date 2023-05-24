#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int i;

	current = *stack;
	if (current == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	i = current->n;
	current->n = current->next->n;
	current->next->n = i;
}
