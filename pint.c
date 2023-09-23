#include "monty.h"
#include <stdio.h>

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer
 * @lineNum: line number whare pint is called
 */
void pint(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL)
	{
		dprintf(2, "L%d: can't pint, stack is empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
