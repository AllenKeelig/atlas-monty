#include "monty.h"

/**
 * _free - Frees a stack
 *
 * This function recursively frees all nodes in the stack linked list.
 * It traverses the stack and frees each node from the top of the stack
 *
 * @stack: A pointer to the top of the stack (linked list).
 *
 * Return: None (void).
 */


void _free(stack_t *stack)
{
	if (stack)
	{
		_free(stack->next);
		free(stack);
	}
}
