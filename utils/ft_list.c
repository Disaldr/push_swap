/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:52:50 by kmumm             #+#    #+#             */
/*   Updated: 2022/03/27 13:53:33 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int data, int index)
{
	t_stack	*new;

	new = malloc (sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = index;
	new->next = NULL;
	return (new);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_pushback(t_stack **lst, t_stack *elem)
{
	t_stack	*tmp;

	if (!lst || !elem)
		return ;
	if (!*lst)
	{
		*lst = elem;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = elem;
}

void	ft_lstclear(t_stack **stack)
{
	if (!stack || !*stack)
		return ;
	ft_lstclear(&(*stack)->next);
	free (*stack);
	*stack = NULL;
}