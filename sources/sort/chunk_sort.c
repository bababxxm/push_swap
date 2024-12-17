/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:08:38 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 18:34:37 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	is_in_the_current_chunk(t_stack *stack, int chunk_start, int chunk_end)
{
	if (stack->index >= chunk_start && stack->index <= chunk_end)
		return (true);
	return (false);
}

void	split_chunks(t_stack **a, t_stack **b, int chunk_size)
{
	int	cnt;
	int	chunk_start;
	int	chunk_end;

	chunk_start = 1;
	chunk_end = chunk_size;
	while (*a)
	{
		cnt = 0;
		while (*a && cnt < chunk_size)
		{
			if (is_in_the_current_chunk(*a, chunk_start, chunk_end))
			{
				pb(a, b);
				cnt++;
			}
			else if (!is_in_the_current_chunk(*a, chunk_start, chunk_end) \
				&& *b && (*b)->index <= (chunk_start + chunk_end) / 2)
				rr(a, b);
			else
				ra(a);
		}
		chunk_start += chunk_size;
		chunk_end += chunk_size;
	}
}

void	bring_to_top_b(t_stack **b, int index)
{
	int	sizeof_b;
	int	position;

	position = find_positon(*b, index);
	sizeof_b = stack_size(*b);
	if (position <= sizeof_b / 2)
	{
		while ((*b)->index != index)
			rb(b);
	}
	else
	{
		while ((*b)->index != index)
			rrb(b);
	}
}

void	sort_chunks(t_stack **a, t_stack **b, int chunk_size, int size)
{
	int	cnt;
	int	max_index;
	int	chunk_start;
	int	chunk_end;

	chunk_start = size - chunk_size + 1;
	chunk_end = size;
	while (*b)
	{
		cnt = 0;
		while (*b && cnt < chunk_size)
		{
			max_index = find_max(*b)->index;
			bring_to_top_b(b, max_index);
			pa(a, b);
			cnt++;
		}
		chunk_start = chunk_start - chunk_size;
		chunk_end = chunk_end - chunk_size;
	}
}

void	chunk_sort(t_stack **a, t_stack **b, int size)
{
	int	chunk_size;
	int	chunk_amount;

	chunk_amount = 0;
	if (size < 20)
		chunk_amount = 1;
	else if (size >= 20 && size < 50)
		chunk_amount = 2;
	else if (size >= 50 && size < 250)
		chunk_amount = 5;
	else if (size >= 250)
		chunk_amount = 10;
	chunk_size = size / chunk_amount;
	split_chunks(a, b, chunk_size);
	sort_chunks(a, b, chunk_size, size);
}
