/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:39:54 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/05 09:06:44 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *tab, int l, int h)
{
	int	piv;
	int	i;
	int	j;

	piv = tab[h];
	i = -1;
	j = -1;
	while (++j < h)
		if (tab[j] <= piv)
			swap(&tab[++i], &tab[j]);
	swap(&tab[i + 1], &tab[h]);
	return (i + 1);
}

void	quicksort(int *tab, int l, int h)
{
	int	piv;

	if (l < h)
	{
		piv = partition(tab, l, h);
		quicksort(tab, l, piv - 1);
		quicksort(tab, piv + 1, h);
	}
}
