/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:56:06 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/10 15:56:13 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_free_str(char **str)
{
	if (*str)
		free(*str);
	*str = NULL;
	return (FALSE);
}

t_bool	ft_free_int_tab(int **tab)
{
	if (*tab)
		free(*tab);
	*tab = NULL;
	return (FALSE);
}
