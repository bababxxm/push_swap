/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:45:40 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 17:45:28 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	data = (t_data){NULL, NULL};
	if (argc < 2 || ft_is_invalid_argv(argc, argv))
		ft_exit(ERROR_MSG, EXIT_FAILURE);
	init(&data, ft_split_args(argc - 1, argv + 1));
	push_swap(data);
	exit(EXIT_SUCCESS);
}
