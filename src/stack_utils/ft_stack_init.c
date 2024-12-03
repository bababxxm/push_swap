/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:30:37 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:31:06 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_stack_init(t_data stack, char **args)
{
	int		idx;
	long	nbr;

	if (!args)
		ft_clear_and_exit(stack, args);
	idx = -1;
	while (args[++idx])
	{
		nbr = ft_atol(args[idx]);
		if (ft_is_invalid_input(stack, args[idx], nbr))
			ft_clear_and_exit(stack, args);
		ft_stack_addback(&stack.a, ft_stack_new(nbr));
	}
	return (stack);
}
