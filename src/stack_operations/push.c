/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:20:45 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:22:54 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	write(1, "pb\n", 3);
}
