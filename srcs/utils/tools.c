/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@42nice.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:43:22 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/29 16:43:26 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_elem(t_stack *dst, t_elem *elem)
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

void	del_elem(t_stack *src, t_elem **elem)
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

void	exit_push_swap(t_stack *stack, t_bool error)
{
	t_elem	*free_elem;

	while (stack->count)
	{
		del_elem(stack, &free_elem);
		free(free_elem);
	}
	if (error)
		ft_putstr_fd("Error\n", 2);
	exit(EXIT_SUCCESS);
}
