/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:12:32 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:12:55 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_split_args(int argc, char *argv[])
{
	int		i;
	int		wc;
	int		idx;
	char	**set;
	char	**args;

	i = -1;
	wc = 0;
	while (++i < argc)
		wc += ft_wordcount(argv[i], ' ');
	args = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!args)
		return (NULL);
	i = -1;
	idx = 0;
	while (++i < argc)
	{
		set = ft_split(argv[i], ' ');
		if (!set)
			return (ft_clear_args(args), NULL);
		while (*set)
			args[idx++] = *set++;
	}
	args[idx] = NULL;
	return (args);
}
