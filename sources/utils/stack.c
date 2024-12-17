/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:36:31 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 16:43:00 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stack_new(int n)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> index = 0;
	new -> number = n;
	new -> prev = NULL;
	new -> next = NULL;
	new -> last = NULL;
	return (new);
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack -> next;
	}
	return (size);
}

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
}

void	stack_addback(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!stack || !new)
		return ;
	if (*stack)
	{
		last = (*stack)->last;
		last -> next = new;
		(*stack)->last = new;
	}
	else
	{
		*stack = new;
		(*stack)->last = new;
	}
}

void	stack_update_prev(t_stack *stack)
{
	t_stack	*next;

	if (!stack || !stack->next)
		return ;
	next = stack -> next;
	while (next)
	{
		next -> prev = stack;
		stack = stack -> next;
		next = next -> next;
	}
}
