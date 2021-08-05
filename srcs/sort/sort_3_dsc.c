/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_dsc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:01:47 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/24 16:39:07 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "push_swap.h"


static void	sort_3_a_dsc(t_stacks *s)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)s->a->content;
	b = *(int *)s->a->next->content;
	c = *(int *)ft_lstlast(s->a)->content;
	
	if (a > b && b < c && a > c)
	{
		sa(s);
		ra(s, TRUE);
	}
	else if (a > b && b < c)
		rra(s, TRUE);
	else if (a < b && b < c)
	{
		sa(s);
		rra(s, TRUE);
	}
	else if (a < b && b > c && a > c)
		sa(s);
	else if (a < b && b > c)
		ra(s, TRUE);
	else if (a < b && a > c)
		rra(s, TRUE);
}

static void	sort_3_b_dsc(t_stacks *s)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)s->b->content;
	b = *(int *)s->b->next->content;
	c = *(int *)ft_lstlast(s->b)->content;
	
	if (a > b && b < c && a > c)
	{
		sb(s);
		rb(s, TRUE);
	}
	else if (a > b && b < c)
		rrb(s, TRUE);
	else if (a < b && b < c)
	{
		sb(s);
		rrb(s, TRUE);
	}
	else if (a < b && b > c && a > c)
		sb(s);
	else if (a < b && b > c)
		rb(s, TRUE);
	else if (a < b && a > c)
		rrb(s, TRUE);
}

void	sort_3_dsc(t_stacks *s, t_wich stack)
{
	if (stack == A)
		sort_3_a_dsc(s);
	else if (stack == B)
		sort_3_b_dsc(s);
}
*/