/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:06:42 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 17:57:53 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	assign_sorted_index(t_stack *a)
{
	int		index;
	int		size;
	t_stack	*next_min;

	if (!a || is_sorted(a))
		return ;
	index = 1;
	size = stack_size(a);
	while (index <= size)
	{
		next_min = find_next_min(a);
		next_min -> index = index;
		index++;
	}
}

t_stack	*find_min(t_stack *a)
{
	t_stack	*min;

	min = a;
	a = a -> next;
	while (a)
	{
		if (min->number > a->number)
			min = a;
		a = a -> next;
	}
	return (min);
}

t_stack	*find_max(t_stack *a)
{
	t_stack	*max;

	max = a;
	a = a -> next;
	while (a)
	{
		if (max->number < a->number)
			max = a;
		a = a -> next;
	}
	return (max);
}

int	find_positon(t_stack *stack, int index)
{
	int	position;

	position = 0;
	while (stack)
	{
		if (stack->index == index)
			return (position);
		position++;
		stack = stack -> next;
	}
	return (-1);
}

t_stack	*find_next_min(t_stack *a)
{
	t_stack	*next_min;

	next_min = a;
	a = a -> next;
	while (a)
	{
		if (next_min->number > a->number && a->index == 0)
			next_min = a;
		if (next_min -> index != 0)
			next_min = next_min -> next;
		a = a -> next;
	}
	return (next_min);
}
