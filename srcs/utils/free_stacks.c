/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:07:59 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/06 20:09:15 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_push_swap(t_stack *stack, t_bool error)
{
	t_elem *free_elem;

	while (stack->count)
	{
		del_elem(stack, &free_elem);
		free(free_elem);
	}
	if (error)
		ft_putstr_fd("Error\n", 2);
	exit(EXIT_SUCCESS);
}
