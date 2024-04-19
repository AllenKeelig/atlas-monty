#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
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
