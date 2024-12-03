/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_and_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:17:26 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:18:09 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_and_exit(t_data stack, char **args)
{
	ft_clear_args(args);
	ft_clear_stack(stack);
	ft_exit_error(ERROR_MSG);
}
