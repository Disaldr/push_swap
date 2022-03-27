/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:51:27 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 13:51:29 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct stack{
	int				data;
	int				index;
	struct stack	*next;
}	t_stack;

//utils
void	parse_args(char **args, int argc, t_stack **stack);
void	ft_pushback(t_stack **lst, t_stack *elem);
long	ft_atoi(const char *str);
void	ft_exit_error(t_stack **stack_a, t_stack **stack_b, int flag);
int		steps_to_index(t_stack *stack_a, int index, int flag, int argc);
int		ft_strcmp(const char *s1, const char *s2);
char	*get_next_line(int fd);

//sort
int		ft_is_sort(t_stack *stack, int argc);
void	ft_sort(t_stack **stack, int argc);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b, int argc);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b, int argc);
void	ft_sort_big(t_stack **stack_a, t_stack **stack_b,
			int interval, int argc);

//lst
t_stack	*ft_lstnew(int data, int index);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstclear(t_stack **stack);

//Stack commands
void	sa(t_stack **stack, int flag);
void	sb(t_stack **stack, int flag);
void	ss(t_stack **stack_a, t_stack **stack_b, int flag);
void	pa(t_stack **from, t_stack **to, int flag);
void	pb(t_stack **from, t_stack **to, int flag);
void	ra(t_stack **stack, int flag);
void	rb(t_stack **stack, int flag);
void	rr(t_stack **stack_a, t_stack **stack_b, int flag);
void	rra(t_stack **stack, int flag);
void	rrb(t_stack **stack, int flag);
void	rrr(t_stack **stack_a, t_stack **stack_b, int flag);

#endif