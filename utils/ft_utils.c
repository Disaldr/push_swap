/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:08:29 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:12:42 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	i = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	ft_is_sort(t_stack *stack, int argc)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
		i++;
	}
	if (i != argc)
		return (0);
	return (1);
}

int	steps_to_index(t_stack *stack_a, int index, int flag, int argc)
{
	int	steps;

	steps = 0;
	while (stack_a)
	{
		if (stack_a->index == index)
			break ;
		steps++;
		stack_a = stack_a->next;
	}
	if (flag)
		return (steps);
	else if (steps > argc / 2)
		return (0);
	else
		return (1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - s2[i]);
}

void	ft_exit_error(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if (stack_a)
		ft_lstclear(stack_a);
	if (stack_b)
		ft_lstclear(stack_b);
	if (flag)
		write (2, "Error\n", 6);
	exit (0);
}