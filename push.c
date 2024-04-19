#include "monty.h"

/**
 * _push - Pushes an element onto the top of the stack
 * @stack: Double pointer to the top of the stack (linked list).
 * @line_number: Line number of the current instruction.
 * @temp: String containing the integer to push onto the stack.
 *
 * Return: None.
 */
void _push(stack_t **stack, unsigned int line_number, char *temp)
{

	stack_t *new_top;

	(void)line_number;

	if (temp == NULL || _isdigit(temp) == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
		if (_isdigit(temp) == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(file);
			_free(*stack);
			exit(EXIT_FAILURE);
		}
	}
	new_top = malloc(sizeof(stack_t));
	if (new_top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(file);
		exit(EXIT_FAILURE);
	}
	new_top->n = atoi(temp);
	new_top->next = NULL;
	new_top->prev = NULL;
	if (*stack)
	{
		new_top->next = *stack;
		(*stack)->prev = new_top;
		*stack = new_top;
	}
	*stack = new_top;
}


/**
 *  _isdigit - Finds if char is a digit or not
 *
 *  @str: Character passed in
 *
 *  Return: 1 for digit, 0 if not
 */

int _isdigit(char *str)
{

	int i = 0;


	if (str[i] == '-')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (1);
		}
		i++;
	}

	return (0);
}
