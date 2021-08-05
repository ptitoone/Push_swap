/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:52:44 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/07 21:04:18 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	t_elem	*e_a;
	t_elem	*e_b;
	int	i;

	e_a = a->head;
	e_b = b->head;
	i = 0;
	ft_printf("  A\t  B\n  %i\t  %i\n", a->count, b->count);
	while (i < a->count || i < b->count)
	{
		if (i < a->count)
		{
			ft_printf("\n  %i\t|", e_a->index);
			e_a = e_a->next;
		}
		else
			ft_printf("\n \t|");
		if (i < b->count)
		{
			e_b = e_b->next;
			ft_printf(" %i", e_b->index);
		}
		i++;
	}
	ft_printf("\n");
}

/////

static t_bool	check_duplicates(t_stack *stack, char **split, long int value)
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

static void	new_elem(t_stack *a, char **split, long int value)
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

void create_stack(t_stack *a, char **split)
{
	int i;

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

////

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	char 	*joined;
	char	**split;

	joined = NULL;
	if (ac == 1)
		exit_push_swap(&a, TRUE);
	else
		ft_join_list(av + 1, ac - 1, &joined, ' ');
	if (!joined)
		return (0);
	init_stacks(&a, &b);
	split = ft_split(joined,' ');
	free(joined);
	create_stack(&a, split);
	free_split(split);
	indexate_stack(&a);
	is_sorted(&a);
	sort(&a, &b);
	//print_stacks(&a, &b);
	exit_push_swap(&a, FALSE);
	return (0);
}
