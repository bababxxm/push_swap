/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:37:28 by sklaokli          #+#    #+#             */
/*   Updated: 2024/12/03 22:34:20 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

# define ERROR_MSG "Error\n"

// utils: libft, get_next_line

long	ft_atol(const char *ptr);
void	ft_exit_error(char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int num, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char *s, char sep);

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
	struct s_stack	*last;
}	t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
}	t_data;

// clear_utils
void	ft_clear_args(char **args);
void	ft_clear_stack(t_data stack);
void	ft_clear_and_exit(t_data stack, char **args);

// parsers
bool	ft_is_int_or_sign(int c);
bool	ft_is_invalid_int(long nbr);
bool	ft_is_empty_str(char *s);
bool	ft_is_invalid_argv(int argc, char *argv[]);
bool	ft_is_invalid_input(t_data stack, char *ptr, long nbr);
bool	ft_has_duplicate(t_stack *stack, int nbr);
char	**ft_split_args(int argc, char *argv[]);

// stack_utils
t_stack	*ft_stack_new(int n);
int		ft_stack_size(t_stack *stack);
void	ft_stack_addback(t_stack **stack, t_stack *to_add);
t_data	ft_stack_init(t_data stack, char **args);
void	ft_print_stack(t_stack *stack, bool print_last);
void	ft_print_both_stack(t_stack *a, t_stack *b, bool print_last);

// operations
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

// sort_algorithm

#endif
