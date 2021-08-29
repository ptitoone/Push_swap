/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@42nice.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:42:06 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/29 16:42:29 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(t_stack *stack, t_bool print)
{
	if (stack->count > 1)
	{
		stack->head = stack->head->next;
		if (print)
		{
			if (stack->stack == 'a')
				ft_putstr_fd("ra\n", 1);
			else
				ft_putstr_fd("rb\n", 1);
		}
	}
}

void	rr(t_stack *stack, t_bool print)
{
	if (stack->count > 1)
	{
		stack->head = stack->head->prev;
		if (print)
		{
			if (stack->stack == 'a')
				ft_putstr_fd("rra\n", 1);
			else
				ft_putstr_fd("rrb\n", 1);
		}
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	r(a, FALSE);
	r(b, FALSE);
	ft_putstr_fd("rr\n", 1);
}

void	rrrr(t_stack *a, t_stack *b)
{
	rr(a, FALSE);
	rr(b, FALSE);
	ft_putstr_fd("rrr\n", 1);
}
