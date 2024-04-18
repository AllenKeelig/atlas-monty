#include "monty.h"
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	size_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		/* Tokenize the line */
		char *opcode = strtok(line, " \n");
		if (opcode != NULL)
		{
			if (strcmp(opcode, "push") == 0)
			{
				char *value_str = strtok(NULL, " \n");
				if (value_str == NULL)
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_number);
					fclose(file);
					free(line);
					return (EXIT_FAILURE);
				}
				int value;
				if (!isdigit(*value_str) && *value_str != '-' && *value_str != '+')
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_number);
					fclose(file);
					free(line);
					return (EXIT_FAILURE);
				}
				value = atoi(value_str);
				push(&stack, value);
			}
			else if (strcmp(opcode, "pall") == 0)
			{
				pall(&stack, line_number);
			}
			// Add other opcodes handling here if needed
		}
	}

	free(line);
	fclose(file);

	/* Free stack memory */
	while (stack != NULL)
	{
		stack_t *temp = stack;
		stack = stack->next;
		free(temp);
	}

	return (EXIT_SUCCESS);
}
