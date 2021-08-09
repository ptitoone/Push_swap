/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:55:09 by akotzky           #+#    #+#             */
/*   Updated: 2021/06/24 19:03:15 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	check_duplicates(t_stack *stack, char **split, long int value)
{
	int		i;
	t_elem	*current;

	i = -1;
	current = stack->head;
	while (++i < stack->count)
	{
		if (current->value == value)
		{
			free_split(split);
			exit_push_swap(stack, TRUE);
		}
		current = current->next;
	}
	return (TRUE);
}

void	check_if_sorted(t_stack *stack)
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
