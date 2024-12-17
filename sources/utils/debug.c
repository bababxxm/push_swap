/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:49:32 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 17:14:54 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack *stack, bool print_last)
{
	int		i;
	t_stack	*last;

	i = 1;
	if (!stack)
		return ;
	last = stack -> last;
	while (stack)
	{
		ft_putnbr_fd(i++, 1);
		ft_putstr_fd(": ", 1);
		ft_putnbr_fd(stack -> number, 1);
		ft_putstr_fd("\n", 1);
		stack = stack -> next;
	}
	if (!last || !print_last)
		return ;
	ft_putstr_fd("last: ", 1);
	ft_putnbr_fd(last -> number, 1);
	ft_putstr_fd("\n", 1);
}

void	print_both_stack(t_stack *a, t_stack *b, bool print_last)
{
	ft_putstr_fd("---------------\n", 1);
	if (!a)
		ft_putstr_fd("a\nNone\n", 1);
	else
	{
		ft_putstr_fd("a\n", 1);
		print_stack(a, print_last);
	}
	ft_putstr_fd("---------------\n", 1);
	if (!b)
		ft_putstr_fd("b\nNone\n", 1);
	else
	{
		ft_putstr_fd("b\n", 1);
		print_stack(b, print_last);
	}
	ft_putstr_fd("---------------\n", 1);
}
