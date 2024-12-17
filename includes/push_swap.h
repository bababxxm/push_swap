/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:26:52 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/17 17:59:00 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

# include "../libft/includes/libft.h"

# define ERROR_MSG "Error"

typedef struct s_stack
{
	int				index;
	int				number;
	struct s_stack	*prev;
	struct s_stack	*next;
	struct s_stack	*last;
}	t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
}	t_data;

t_stack	*stack_new(int n);
void	stack_addback(t_stack **stack, t_stack *new);
bool	is_invalid_input(t_data stack, char *ptr, long nbr);
void	clear_and_exit(t_data stack, char **args, bool status);
void	init(t_data *stack, char **args);
int		find_positon(t_stack *stack, int index);
char	**ft_split_args(int argc, char *argv[]);
void	clear_args(char **args);
void	clear_data(t_data data);

void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	push(t_stack **stack1, t_stack **stack2);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	rotate(t_stack **stack);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **a, t_stack **b);

void	reverse_rotate(t_stack **stack);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **a, t_stack **b);

char	**ft_split(char *s, char sep);
void	clear_args(char **args);
void	push_swap(t_data stack);
void	stack_update_prev(t_stack *stack);
void	sort_three(t_stack **stack);
bool	is_sorted(t_stack *stack);
t_stack	*find_max(t_stack *a);
t_stack	*find_min(t_stack *a);
t_stack	*find_next_min(t_stack *a);
int		stack_size(t_stack *stack);
void	tiny_sort(t_stack **a, t_stack **b, int size);
void	assign_sorted_index(t_stack *a);
void	chunk_sort(t_stack **a, t_stack **b, int size);
void	print_stack(t_stack *stack, bool print_last);
void	print_both_stack(t_stack *a, t_stack *b, bool print_last);

#endif