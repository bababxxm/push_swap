/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_addback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:10:25 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:11:44 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_addback(t_stack **stack, t_stack *to_add)
{
	t_stack	*last;

	if (!stack || !to_add)
		return ;
	if (*stack)
	{
		last = (*stack)->last;
		last -> next = to_add;
		(*stack)->last = to_add;
	}
	else
	{
		*stack = to_add;
		(*stack)->last = to_add;
	}
}
