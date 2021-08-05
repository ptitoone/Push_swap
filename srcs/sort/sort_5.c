/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 12:18:47 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/24 16:39:29 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "push_swap.h"

int find_smallest(t_list *s)
{
	t_list	*browse_i;
	t_list	*browse_j;
	int		small;
	int		i;
	
	browse_i = s;
	small = *(int *)s->content;
	i = 0;
	while (browse_i)
	{
		browse_j = browse_i;
		while (browse_j->next)
		{
			if (*(int *)browse_j->next->content < small)
				small = *(int *)browse_j->next->content;
			browse_j = browse_j->next;
		}
		browse_i = browse_i->next;
	}
	browse_i = s;
	while(*(int *)browse_i->content != small && ++i)
		browse_i = browse_i->next;
	return (i);
}

static void	sort_5_a(t_stacks *s)
{
	int	small;
	int	i;
	int	j;
	
	j = -1;
	while (++j < 2)
	{
		small = find_smallest(s->a);
		if (small >= 2)
		{
			i = ft_lstsize(s->a) - small;
			while (i-- > 0)
				rra(s, TRUE);
		}
		else if (small > 0)
		{
			while (small > 0)
			{
				ra(s, TRUE);
				small--;
			}
		}
		pb(s);
	}
	sort_3(s, A);
	pa(s);
	pa(s);
}

static void	sort_5_b(t_stacks *s)
{
	int	small;
	int	i;
	int	j;
	
	j = -1;
	while (++j < 2)
	{
		small = find_smallest(s->b);
		if (small >= 2)
		{
			i = ft_lstsize(s->b) - small;
			while (i-- > 0)
				rrb(s, TRUE);
		}
		else if (small > 0)
		{
			while (small > 0)
			{
				rb(s, TRUE);
				small--;
			}
		}
		pa(s);
	}
	sort_3(s, B);
	pb(s);
	pb(s);
}

void	sort_5(t_stacks *s, t_wich stack)
{
	if (stack == A)
		sort_5_a(s);
	else if (stack == B)
		sort_5_b(s);
}
*/