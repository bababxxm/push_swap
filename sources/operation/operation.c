/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:38:46 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 16:56:54 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;
	t_stack	*stack_last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	third = second -> next;
	stack_last = (*stack)->last;
	first -> next = third;
	second -> next = first;
	*stack = second;
	if (!third)
		(*stack)->last = first;
	else
		(*stack)->last = stack_last;
	stack_update_prev(*stack);
}

void	push(t_stack **stack1, t_stack **stack2)
{
	t_stack	*res_head;
	t_stack	*stack1_last;
	t_stack	*stack2_last;

	if (!*stack2)
		return ;
	if (!*stack1)
	{
		*stack1 = *stack2;
		(*stack2)->next->last = (*stack2)->last;
		*stack2 = (*stack2)->next;
		(*stack1)->next = NULL;
		(*stack1)->last = *stack1;
		return ;
	}
	res_head = (*stack2)->next;
	stack1_last = (*stack1)->last;
	stack2_last = (*stack2)->last;
	(*stack2)->next = *stack1;
	*stack1 = *stack2;
	(*stack1)->last = stack1_last;
	*stack2 = res_head;
	if (!*stack2)
		return ;
	(*stack2)->last = stack2_last;
}

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = (*stack)->last;
	*stack = first -> next;
	first -> next = NULL;
	last -> next = first;
	(*stack)->last = first;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = (*stack)->last;
	before_last = *stack;
	while (before_last -> next != last)
		before_last = before_last -> next;
	before_last -> next = NULL;
	last -> next = first;
	*stack = last;
	(*stack)->last = before_last;
}
