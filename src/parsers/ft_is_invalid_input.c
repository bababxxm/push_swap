/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_invalid_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:56:22 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 21:57:44 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_invalid_input(t_data stack, char *ptr, long nbr)
{
	int	i;
	int	sign_cnt;

	i = 0;
	sign_cnt = 0;
	if (ft_is_invalid_int(nbr) || ft_has_duplicate(stack.a, nbr))
		return (true);
	while (ptr[i])
	{
		if (!ft_is_int_or_sign(ptr[i]))
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
