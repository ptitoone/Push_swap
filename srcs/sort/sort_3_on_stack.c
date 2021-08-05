/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_on_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:01:10 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/13 16:45:39 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "push_swap.h"

void sort_3_on_stack(t_stacks *s)
{
	int a = *(int *)s->b->content;
	int	b = *(int *)s->b->next->content;
	int	c = *(int *)s->b->next->next->content;

	if (a > b && b < c && a > c)
	{
		pa(s);
		sb(s);
		pa(s);
		pa(s);
	}
	else if (a > b && b < c)
	{
		pa(s);
		sb(s);
		pa(s);	
		sa(s);
		pa(s);	
	}
	else if (a > b & b > c)
	{
		pa(s);	
		pa(s);	
		pa(s);	
	}
	else if (a < b && b < c)
	{
		sb(s);
		pa(s);
		sb(s);
		pa(s);
		sa(s);
		pa(s);
	
	}
	else if (a < b && b > c && a > c)
	{
		sb(s);
		pa(s);	
		pa(s);	
		pa(s);	
	}
	else if (a < b && b > c)
	{
		sb(s);
		pa(s);
		sb(s);
		pa(s);
		pa(s);
	}
}

*/