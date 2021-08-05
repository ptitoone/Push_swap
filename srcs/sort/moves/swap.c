/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:09:48 by akotzky           #+#    #+#             */
/*   Updated: 2021/06/29 16:41:27 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(t_stack *stack, t_bool print)
{
	int 	value;
	int 	index;

	if (stack->count > 1
		&& ((stack->stack == 'a'
			&& stack->head->index > stack->head->next->index)
			|| (stack->head->index < stack->head->next->index
				&& stack->stack == 'b')))
	{
		value = stack->head->value;
		stack->head->value = stack->head->next->value;
		stack->head->next->value = value;
		index = stack->head->index;
		stack->head->index = stack->head->next->index;
		stack->head->next->index = index;
		if (print)
		{
			if (stack->stack == 'a' && print)
				ft_putstr_fd("sa\n", 1);
			else if (print)
				ft_putstr_fd("sb\n", 1);
		}
	}
}

void	ss(t_stack *a, t_stack *b)
{
	if (a->count > 1 && b->count > 1
		&& a->head->value > a->head->next->value
		&& b->head->value < b->head->next->value)
	{
		s(a, FALSE);
		s(b, FALSE);
		ft_putstr_fd("ss\n", 1);
	}
	else if (a->count > 1
		&& a->head->value > a->head->next->value)
		s(a, TRUE);
	else if (b->count > 1
		&& b->head->value < b->head->next->value)
		s(b, TRUE);
}
