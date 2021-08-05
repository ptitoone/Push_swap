/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:07:59 by akotzky           #+#    #+#             */
/*   Updated: 2021/07/06 20:09:15 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_malloc_char(int size, char **dst)
{
	*dst = (char *)malloc(size * sizeof(char));
	if (*dst)
		return (TRUE);
	return (FALSE);
}

t_bool	ft_malloc_int(int size, int **tab)
{
	*tab = (int *)malloc(size * sizeof(int));
	if (*tab)
		return (TRUE);
	return (FALSE);
}