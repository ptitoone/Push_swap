/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:37:00 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/19 17:01:07 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void set_range(t_stack *a, t_range *range)
{
	range->bound = a->count;
	range->range_min = 1;
	if (a->count <= 25)
		range->offset = 5;
	else if (a->count <= 250)
		range->offset = (a->count / 100) * 20;
	else
		range->offset = (a->count / 100) * 14;
	range->range_max = range->offset;
	range->piv = range->offset / 2;
}

int search_smallest_index(t_stack *s, int index_min)
{
	t_elem	*browse;
	int		i;

	browse = s->head;
	i = -1;
	while (++i < s->count)
	{
		if (browse->index < index_min)
			index_min = browse->index;
		browse = browse->next;
	}
	return (index_min);
}

void	sort(t_stack *a, t_stack *b)
{
	t_range	range;

	set_range(a, &range);
	while (a->count > 3)
	{
		while (a->count > 3
			&& search_smallest_index(a, range.bound) <= range.range_max)
			a_to_b(a, b, &range);
		(range.range_min) += (range.offset);
		(range.range_max) += (range.offset);
		(range.piv) += (range.offset);
	}
	sort_a(a);
	//print_stacks(a, b);
	while (b->count)
		b_to_a(a, b);
}
