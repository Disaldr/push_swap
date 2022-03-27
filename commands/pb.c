/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:57:35 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/12 03:29:51 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack **from, t_stack **to, int flag)
{
	t_stack	*tmp;

	if (!*from)
		return ;
	tmp = *from;
	*from = tmp->next;
	tmp->next = *to;
	*to = tmp;
	if (flag)
		write(1, "pb\n", 3);
}
