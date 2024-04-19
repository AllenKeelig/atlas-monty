#include "monty.h"

/**
 *  get_free - Free stack
 *
 *  @stack: Stack pointer
 *
 *  Return: Void
 *  description: function to free memory for functions.
 */


void _free(stack_t *stack)
{
	if (stack)
	{
		_free(stack->next);
		free(stack);
	}
}
