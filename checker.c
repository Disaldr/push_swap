/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:50:56 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:12:33 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_commands(char *buf, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(buf, "pa\n"))
		pa(stack_b, stack_a, 0);
	else if (!ft_strcmp(buf, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(buf, "ra\n"))
		ra(stack_a, 0);
	else if (!ft_strcmp(buf, "rb\n"))
		rb(stack_b, 0);
	else if (!ft_strcmp(buf, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(buf, "rra\n"))
		rra(stack_a, 0);
	else if (!ft_strcmp(buf, "rrb\n"))
		rrb(stack_b, 0);
	else if (!ft_strcmp(buf, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strcmp(buf, "sa\n"))
		sa(stack_a, 0);
	else if (!ft_strcmp(buf, "sb\n"))
		sb(stack_b, 0);
	else if (!ft_strcmp(buf, "ss\n"))
		ss(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

int	accept_input(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			return (1);
		if (!parse_commands(line, stack_a, stack_b))
			return (0);
		free (line);
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		ft_exit_error(NULL, NULL, 0);
	parse_args(argv + 1, argc - 1, &stack_a);
	if (!accept_input(&stack_a, &stack_b))
		ft_exit_error(&stack_a, &stack_b, 1);
	if (!ft_is_sort(stack_a, argc - 2))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_exit_error(&stack_a, &stack_b, 0);
}
