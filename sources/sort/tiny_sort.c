/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:10:41 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 18:30:54 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	sort_three(t_stack **a)
{
	t_stack	*max;

	max = find_max(*a);
	if (*a == max)
		ra(a);
	if ((*a)->next == max)
		rra(a);
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	min;

	min = find_min(*a)->number;
	if (min == (*a)->next->number)
		sa(a);
	if (min == (*a)->next->next->number)
	{
		ra(a);
		ra(a);
	}
	if (min == (*a)->next->next->next->number)
		rra(a);
	if (is_sorted(*a))
		return ;
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int		i;
	int		pos;
	t_stack	*min;

	i = -1;
	while (++i < 2)
	{
		min = find_min(*a);
		pos = find_positon(*a, min->index) + 1;
		if (pos <= 3)
		{
			while (*a != min)
				ra(a);
		}
		else
		{
			while (*a != min)
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

void	tiny_sort(t_stack **a, t_stack **b, int size)
{
	if (!a || is_sorted(*a))
		return ;
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}
