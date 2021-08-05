/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:53:42 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/22 14:58:41 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_tab(t_stack *stack, int *tab)
{
	t_elem *browse;
	int	i;

	browse = stack->head;
	i = -1;

	while (++i < stack->count)
	{
		tab[i] = browse->value;
		browse = browse->next;
	}
}

void add_index(t_stack *stack, int *tab)
{
	int		i;
	t_elem	*browse;

	browse = stack->head;
	i = -1;
	while (++i < stack->count)
	{
		while (browse->value != tab[i])
			browse = browse->next;
		browse->index = i + 1;
	}
}

void	indexate_stack(t_stack *stack)
{
	int *tab;

	if (!(ft_malloc_int(stack->count, &tab)))
		exit_push_swap(stack, TRUE);
	init_tab(stack, tab);
	quicksort(tab, 0, stack->count - 1);
	add_index(stack, tab);
	ft_free_int(&tab);
}