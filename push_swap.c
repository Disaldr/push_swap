/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:51:17 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 14:12:28 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = NULL;
	if (argc == 1)
		ft_exit_error(NULL, NULL, 0);
	parse_args(argv + 1, argc - 1, &stack);
	if (ft_is_sort(stack, argc - 2))
		ft_exit_error(&stack, NULL, 0);
	ft_sort(&stack, argc - 1);
}
