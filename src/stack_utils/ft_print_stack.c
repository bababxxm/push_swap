/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:27:51 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:28:04 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack *stack, bool print_last)
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
