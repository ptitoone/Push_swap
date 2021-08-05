/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_int_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:27:18 by akotzky           #+#    #+#             */
/*   Updated: 2021/06/16 13:24:47 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*malloc_int_pointer(int value)
{
	int *num;

	num = (int *)malloc(sizeof(int));
	if (!num)
		return (NULL);
	*num = value;
	return ((void *)num);
}
