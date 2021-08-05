/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:55:09 by akotzky           #+#    #+#             */
/*   Updated: 2021/06/24 19:03:15 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(t_stack *stack)
{
	t_elem	*browse;
	t_bool	sorted;

	browse = stack->head;
	sorted = TRUE;
	while (browse->next != stack->head)
	{
		if (browse->index > browse->next->index)
			sorted = FALSE;
		browse = browse->next;
	}
	if (sorted)
		exit_push_swap(stack, FALSE);
}
