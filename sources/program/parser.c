/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:40:32 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 16:43:45 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_wordcount(char *s, char sep)
{
	int	wc;

	if (!s)
		return (0);
	wc = 0;
	while (*s)
	{
		if (*s != sep && (*(s + 1) == sep || *(s + 1) == '\0'))
			wc++;
		s++;
	}
	return (wc);
}

char	**ft_split_args(int argc, char *argv[])
{
	int		i[3];
	char	**set;
	char	**args;

	i[0] = -1;
	i[1] = 0;
	while (++i[0] < argc)
		i[1] += ft_wordcount(argv[i[0]], ' ');
	args = (char **)malloc(sizeof(char *) * (i[1] + 1));
	if (!args)
		return (NULL);
	i[0] = -1;
	i[1] = 0;
	while (++i[0] < argc)
	{
		i[2] = 0;
		set = ft_split(argv[i[0]], ' ');
		if (!set)
			return (ft_split_free(args), NULL);
		while (set[i[2]])
			args[i[1]++] = set[i[2]++];
		free(set);
	}
	args[i[1]] = NULL;
	return (args);
}
