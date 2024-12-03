/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:15:47 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:16:02 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_stack(t_data stack)
{
	t_stack	*tmp;

	while (stack.a)
	{
		tmp = stack.a;
		stack.a = stack.a -> next;
		free(tmp);
	}
	while (stack.b)
	{
		tmp = stack.b;
		stack.b = stack.b -> next;
		free(tmp);
	}
}
