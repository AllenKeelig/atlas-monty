#include "monty.h"

/**
 * _pall - Prints all elements in the stack
 * @stack: Pointer to the top of the stack (linked list).
 * @line_number: Line number of the current instruction (unused).
 *
 * Return: None.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
