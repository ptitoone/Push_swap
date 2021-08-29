/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@42nice.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:43:04 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/29 16:43:26 by akotzky          ###   ########.fr       */
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

static void	new_elem(t_stack *a, char **split, long value)
{
	t_elem	*elem;

	if (value > INT_MAX || value < INT_MIN)
	{
		free_split(split);
		exit_push_swap(a, TRUE);
	}
	if (a->count)
		check_duplicates(a, split, value);
	elem = (t_elem *)malloc(sizeof(t_elem));
	if (!elem)
	{
		free_split(split);
		exit_push_swap(a, TRUE);
	}
	elem->value = (int)value;
	add_elem(a, elem);
}

void	create_stack(t_stack *a, char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (split[i][0] == '\0' || !(ft_strisnumber(split[i])))
		{
			free_split(split);
			exit_push_swap(a, TRUE);
		}
		new_elem(a, split, ft_atol(split[i++]));
	}
}
