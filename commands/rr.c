/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:38:43 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 03:08:53 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (flag)
		write(1, "rr\n", 3);
}