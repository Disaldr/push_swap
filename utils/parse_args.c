/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:40:44 by cdoria            #+#    #+#             */
/*   Updated: 2022/02/17 20:28:10 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_double(int *arr, int i, int value)
{
	while (i >= 0)
	{
		if (arr[i] == value)
			return (0);
		i--;
	}
	return (1);
}

int	valid_arg(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' && arg[i + 1] == '0')
		return (0);
	if (arg[i] == '-' && arg[i + 1] != '\0')
		i++;
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9' || arg[i] == '-' || arg[i] == '+')
			return (0);
		i++;
	}
	if (ft_atoi(arg) < INT_MIN || ft_atoi(arg) > INT_MAX)
		return (0);
	return (1);
}

void	sort_arr(int *arr, int argc)
{
	int	elem;
	int	pos;
	int	i;

	i = 1;
	elem = 0;
	while (i < argc)
	{
		elem = arr[i];
		pos = i - 1;
		while (pos >= 0 && arr[pos] > elem)
		{
			arr[pos + 1] = arr[pos];
			pos = pos - 1;
		}
		arr[pos + 1] = elem;
		i++;
	}
}

void	create_stack(int *arr, int argc, t_stack **stack, char **args)
{
	int	i;
	int	j;

	j = 0;
	while (args[j])
	{
		i = 0;
		while (i < argc)
		{
			if (ft_atoi(args[j]) == arr[i])
				ft_pushback(stack, ft_lstnew(arr[i], i));
			i++;
		}
		j++;
	}
}

void	parse_args(char **args, int argc, t_stack **stack)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc (sizeof(int) * argc);
	while (i < argc)
	{
		if (!valid_arg(args[i]))
		{
			free (arr);
			ft_exit_error(NULL, NULL, 1);
		}
		arr[i] = ft_atoi(args[i]);
		if (!check_double(arr, i - 1, arr[i]))
		{
			free (arr);
			ft_exit_error(NULL, NULL, 1);
		}
		i++;
	}
	sort_arr(arr, argc);
	create_stack(arr, argc, stack, args);
	free (arr);
}
