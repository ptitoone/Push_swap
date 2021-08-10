/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:38:54 by akotzky           #+#    #+#             */
/*   Updated: 2021/01/20 13:52:52 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

t_bool	ft_strisdigit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(ft_isdigit(str[i])))
			return (FALSE);
	return (TRUE);
}

t_bool	ft_strisnumber(char *str)
{
	if (*str == '-' || *str == '+')
		return (ft_strisdigit(str + 1));
	else
		return (ft_strisdigit(str));
}
