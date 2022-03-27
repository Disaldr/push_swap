/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:10:44 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:10:46 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int	index;

	index = 0;
	while (index < 2)
	{
		while ((*stack_a)->index != index)
		{
			if (steps_to_index(*stack_a, index, 0, argc))
				ra(stack_a, 1);
			else
				rra(stack_a, 1);
		}
		pb(stack_a, stack_b, 1);
		index++;
	}
	ft_sort_three(stack_a);
	pa(stack_b, stack_a, 1);
	pa(stack_b, stack_a, 1);
	if (!ft_is_sort(*stack_a, argc - 1))
		sa(stack_a, 1);
}
