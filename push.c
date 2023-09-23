#include "monty.h"
#include <stdio.h>
/**
 * push - push interger on the stack
 * @stack: pointer
 * @lineNum: line num where push is called
 *
 */
void push(stack_t **stack, unsigned int lineNum)
{
	if (globals->num_tokens <= 1 || !(is_number(globals->tokens[1])))
	{
		free_globals();
		dprintf(2, "L%d: usage: push integer\n", lineNum);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();
	(*stack)->next = (*stack)->prev = NULL;

	(*stack)->n = (int) atoi(globals->tokens[1]);

	if (globals->head != NULL)
	{
		(*stack)->next = globals->head;
		globals->head->prev = *stack;
	}
	globals->head = *stack;
	globals->stack_length += 1;
}
