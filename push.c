#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the push opcode.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

/* Check if the stack pointer is NULL */
	if (stack == NULL)
		{
			fprintf(stderr, "Error: Stack pointer is NULL\n");
			exit(EXIT_FAILURE);
		}

/* Allocate memory for the new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

/* Set the value of the new node */
	new_node->n = line_number;
	new_node->prev = NULL;

/* If the stack is empty */
	if (*stack == NULL)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}