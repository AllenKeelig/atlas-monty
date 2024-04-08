#include "main.h"

/**
 * pall - Prints all the values on the stack, starting from the top.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the pall opcode.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	/* Suppress unused parameter warning */
	(void)line_number;

	/* Iterate through the stack and print values */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}