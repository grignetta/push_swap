/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadenko <dpadenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:10:02 by dpadenko          #+#    #+#             */
/*   Updated: 2023/12/14 18:24:34 by dpadenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*last_node;
	t_list	*head_node;

	if (*stack == NULL)
		return ;
	else if (stack_len(*stack) < 2)
		return ;
	last_node = ft_lstlast(*stack);
	head_node = *stack;
	last_node->next = head_node;
	last_node->prev->next = NULL;
	head_node->prev = last_node;
	last_node->prev = NULL;
	*stack = last_node;
	return ;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	return ;
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
	return ;
}
