/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@42nice.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:41:35 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/29 16:42:29 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p(t_stack *dst, t_stack *src)
{
	t_elem	*tmp;

	if (src->count)
	{
		del_elem(src, &tmp);
		add_elem(dst, tmp);
		dst->head = tmp;
		if (dst->stack == 'a')
			ft_putstr_fd("pa\n", 1);
		else
			ft_putstr_fd("pb\n", 1);
	}
}
