/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_both_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:29:38 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:29:56 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_both_stack(t_stack *a, t_stack *b, bool print_last)
{
	ft_putstr_fd("---------------\n", 1);
	if (!a)
		ft_putstr_fd("a\nNone\n", 1);
	else
	{
		ft_putstr_fd("a\n", 1);
		ft_print_stack(a, print_last);
	}
	ft_putstr_fd("---------------\n", 1);
	if (!b)
		ft_putstr_fd("b\nNone\n", 1);
	else
	{
		ft_putstr_fd("b\n", 1);
		ft_print_stack(b, print_last);
	}
	ft_putstr_fd("---------------\n", 1);
}
