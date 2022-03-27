/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:10:55 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:10:56 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index
		&& (*stack_a)->index > (*stack_a)->next->next->index)
	{
		ra(stack_a, 1);
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a, 1);
		return ;
	}
	else if ((*stack_a)->next->index > (*stack_a)->index
		&& (*stack_a)->next->index > (*stack_a)->next->next->index)
	{
		rra(stack_a, 1);
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a, 1);
		return ;
	}
	else if ((*stack_a)->index > (*stack_a)->next->index)
	{
		sa(stack_a, 1);
		return ;
	}
}
