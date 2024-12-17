/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:07:05 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 18:30:59 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	is_sorted(t_stack *stack)
{
	if (!stack || !stack->next)
		return (false);
	while (stack->next)
	{
		if (stack->number > stack->next->number)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	push_swap(t_data data)
{
	int	size;

	if (is_sorted(data.a))
		return ;
	size = stack_size(data.a);
	assign_sorted_index(data.a);
	if (size <= 5)
		tiny_sort(&data.a, &data.b, size);
	else if (size > 5)
		chunk_sort(&data.a, &data.b, size);
	clear_data(data);
}
