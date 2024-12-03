/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_invalid_argv.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:46:40 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 21:46:52 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_invalid_argv(int argc, char *argv[])
{
	int	i;

	if (argc < 2 || !*argv || !argv)
		return (true);
	i = -1;
	while (++i < argc)
	{
		if (ft_is_empty_str(argv[i]))
			return (true);
	}
	return (false);
}
