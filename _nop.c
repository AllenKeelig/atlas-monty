#include "monty.h"


/**
 * _nop - Does nothing
 *
 * This function serves as a no-operation (NOP) command for the Monty
 * It takes in a stack and line number, but performs no action on them.
 * It is used when there is no operation associated with a particular
 *
 * @stack: A double pointer to the top of the stack (linked list).
 * @line_number: The current line number in the script being interpreted.
 *
 * Return: None (void).
 */


void _nop(stack_t **stack, unsigned int line_number)
{

	(void) stack;
	(void) line_number;
}
