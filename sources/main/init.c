/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:02:15 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 17:37:14 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	has_duplicate(t_stack *stack, int nbr)
{
	while (stack)
	{
		if (stack -> number == nbr)
			return (true);
		stack = stack -> next;
	}
	return (false);
}

bool	is_invalid_input(t_data data, char *ptr, long nbr)
{
	int	i;
	int	sign_cnt;

	i = 0;
	sign_cnt = 0;
	if (ft_is_invalid_int(nbr) || has_duplicate(data.a, nbr))
		return (true);
	while (ptr[i])
	{
		if (!ft_isdigit(ptr[i]) && !ft_issign(ptr[i]))
			return (true);
		if (ptr[i] == '+' || ptr[i] == '-')
		{
			if (i != 0 || !ptr[i + 1])
				return (true);
			sign_cnt++;
		}
		if (sign_cnt > 1)
			return (true);
		i++;
	}
	return (false);
}

void	init(t_data *data, char **args)
{
	int		idx;
	long	nbr;

	if (!args)
		clear_and_exit(*data, args, EXIT_FAILURE);
	idx = -1;
	while (args[++idx])
	{
		nbr = ft_atol(args[idx]);
		if (is_invalid_input(*data, args[idx], nbr))
			clear_and_exit(*data, args, EXIT_FAILURE);
		stack_addback(&(*data).a, stack_new(nbr));
	}
	if (!(*data).a)
		clear_and_exit(*data, args, EXIT_FAILURE);
	clear_args(args);
}
