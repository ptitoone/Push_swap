/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@42nice.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:08:12 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/29 17:11:11 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	char	*joined;
	char	**split;

	joined = NULL;
	if (ac == 1 || !*av[1])
		exit_push_swap(&a, TRUE);
	else
		ft_join_list(av + 1, ac - 1, &joined, ' ');
	if (!joined)
		return (0);
	init_stacks(&a, &b);
	split = ft_split(joined, ' ');
	free(joined);
	create_stack(&a, split);
	free_split(split);
	indexate_stack(&a);
	check_if_sorted(&a);
	sort(&a, &b);
	exit_push_swap(&a, FALSE);
	return (0);
}
