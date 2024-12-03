/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:15:20 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:15:36 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_args(char **args)
{
	int	idx;

	if (!args)
		return ;
	idx = 0;
	while (args[idx])
		free(args[idx++]);
	free(args);
}
