/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:34:35 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:33:11 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**args;
	t_data	stack;

	if (ft_is_invalid_argv(argc, argv))
		ft_exit_error(ERROR_MSG);
	args = ft_split_args(argc - 1, argv + 1);
	if (!args)
		ft_exit_error(ERROR_MSG);
	stack = ft_stack_init((t_data){NULL, NULL}, args);
	if (!stack.a)
		ft_exit_error(ERROR_MSG);
	ft_clear_stack(stack);
}
