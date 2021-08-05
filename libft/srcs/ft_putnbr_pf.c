/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 08:53:09 by akotzky           #+#    #+#             */
/*   Updated: 2021/03/02 08:55:19 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incls/ft_printf.h"

void	ft_putnbr_pf(long int n, int fd, t_conv *c)
{
	long int	nb;
	long int	d;
	long int	e;

	if (n == 0)
		ft_putchar_pf('0', 1, c);
	else if ((n >= 0) && (n <= LONG_MAX))
	{
		d = (48 + (n % 10));
		e = (n / 10);
		if (e > 0)
			ft_putnbr_pf(e, fd, c);
		ft_putchar_pf(d, fd, c);
	}
	else if ((n < 0) && (n >= LONG_MIN))
	{
		ft_putchar_pf('-', fd, c);
		nb = -n;
		d = (48 + (nb % 10));
		e = (nb / 10);
		if (e > 0)
			ft_putnbr_pf(e, fd, c);
		ft_putchar_pf(d, fd, c);
	}
}
