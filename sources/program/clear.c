/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:37:56 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 17:47:38 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	clear_args(char **args)
{
	ft_split_free(args);
}

void	clear_data(t_data data)
{
	t_stack	*tmp;

	while (data.a)
	{
		tmp = data.a;
		data.a = data.a -> next;
		free(tmp);
	}
	while (data.b)
	{
		tmp = data.b;
		data.b = data.b -> next;
		free(tmp);
	}
}

void	clear_and_exit(t_data data, char **args, bool status)
{
	clear_args(args);
	clear_data(data);
	ft_exit(ERROR_MSG, status);
}
