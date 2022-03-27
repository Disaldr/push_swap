/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:10:51 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:10:51 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b, int argc)
{
	while ((*stack_a)->index != 0)
	{
		if (steps_to_index(*stack_a, 0, 0, argc))
			ra(stack_a, 1);
		else
			rra(stack_a, 1);
	}
	if (ft_is_sort(*stack_a, argc - 1))
		return ;
	pb(stack_a, stack_b, 1);
	ft_sort_three(stack_a);
	pa(stack_b, stack_a, 1);
}
