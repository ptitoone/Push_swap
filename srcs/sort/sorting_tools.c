/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@42nice.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:41:08 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/29 16:41:16 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a(t_stack *a)
{
	if (a->count == 3)
	{
		if (a->head->index > a->head->prev->index
			&& a->head->index > a->head->next->index)
			r(a, TRUE);
		else if (a->head->next->index > a->head->prev->index)
			rr(a, TRUE);
	}
	s(a, TRUE);
}

t_bool	rot_direction_a(t_stack *a, int range_max)
{
	t_elem	*browse;
	int		i;

	browse = a->head;
	i = 0;
	while (browse->index > range_max)
	{
		browse = browse->next;
		i++;
	}
	browse = a->head;
	while (browse->index > range_max)
	{
		browse = browse->prev;
		i--;
	}
	if (i < 0)
		return (FALSE);
	return (TRUE);
}

void	a_to_b(t_stack *a, t_stack *b, t_range *range)
{
	t_rotate	rotate[2];
	int			select;

	rotate[0] = &r;
	rotate[1] = &rr;
	select = (int)(rot_direction_a(a, range->range_max));
	while (a->head->index > range->range_max
		|| a->head->index > range->bound - 3)
		(rotate[select])(a, TRUE);
	p(b, a);
	if (b->head->index >= range->range_min && b->head->index <= range->piv)
		r(b, TRUE);
}

t_bool	rot_direction_b(t_stack *b)
{
	t_elem	*browse;
	int		i;

	browse = b->head;
	i = 0;
	while (browse->index != b->count)
	{
		browse = browse->next;
		i++;
	}
	browse = b->head;
	while (browse->index != b->count)
	{
		browse = browse->prev;
		i--;
	}
	if (i < 0)
		return (FALSE);
	return (TRUE);
}

void	b_to_a(t_stack *a, t_stack *b)
{
	t_rotate	rotate[2];
	int			index;
	int			select;

	rotate[0] = &r;
	rotate[1] = &rr;
	index = b->count;
	select = (int)(rot_direction_b(b));
	while (b->head->index != index)
	{
		if (b->head->index == index - 1)
			p(a, b);
		if (b->head->index != index)
			(rotate[select])(b, TRUE);
	}
	p(a, b);
	ss(a, b);
}
