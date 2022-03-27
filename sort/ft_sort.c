/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:11:01 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:11:02 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_stack **stack_a, int argc)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (argc == 2)
		sa(stack_a, 1);
	else if (argc == 3)
		ft_sort_three(stack_a);
	else if (argc == 4)
		ft_sort_four(stack_a, &stack_b, argc);
	else if (argc == 5)
		ft_sort_five(stack_a, &stack_b, argc);
	else if (argc >= 6 && argc <= 101)
		ft_sort_big(stack_a, &stack_b, 15, argc);
	else if (argc > 101)
		ft_sort_big(stack_a, &stack_b, 30, argc);
	ft_exit_error(stack_a, &stack_b, 0);
}
