/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:58:47 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 21:58:57 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_has_duplicate(t_stack *stack, int nbr)
{
	while (stack)
	{
		if (stack -> number == nbr)
			return (true);
		stack = stack -> next;
	}
	return (false);
}
