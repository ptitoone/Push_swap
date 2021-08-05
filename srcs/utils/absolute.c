/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absolute.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:53:42 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/22 14:58:41 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(t_stack *a, t_stack *b)
{
	a->head = NULL;
	a->count = 0;
	a->stack = 'a';
	b->head = NULL;
	b->count = 0;
	b->stack = 'b';
}

void add_elem(t_stack *dst, t_elem *elem)
{
	elem->prev = elem;
	elem->next = elem;
	if (dst->count)
	{	
		elem->prev = dst->head->prev;
		elem->next = dst->head;
		dst->head->prev->next = elem;
		dst->head->prev = elem;
	}
	else
		dst->head = elem;
	(dst->count)++;
}

void del_elem(t_stack *src, t_elem **elem)
{
	if (src->count)
	{
		*elem = src->head;
		if (src->count > 1)
		{
			(*elem)->prev->next = (*elem)->next;
			(*elem)->next->prev = (*elem)->prev;
			src->head = src->head->next;
		}
		else
			src->head = NULL;
		(src->count)--;
	}
}