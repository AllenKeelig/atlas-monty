#include "monty.h"

/**
 *  get_free - Free stack
 *
 *  description: function to free memory for functions.
 *
 *  @stack: Stack pointer
 *
 *  Return: Void
 *
 */


void _free(stack_t *stack)
{
	if (stack)
	{
		_free(stack->next);
		free(stack);
	}
}
