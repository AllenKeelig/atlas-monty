#include "monty.h"
/**
 * _pint - prints the top
 * @stack: stack head
 * @counter: line_number
 * Return: no return
*/
void _pint(stack_t **stack, unsigned int counter)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
