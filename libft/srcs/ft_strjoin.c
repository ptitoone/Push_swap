/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:44:47 by akotzky           #+#    #+#             */
/*   Updated: 2021/01/22 13:37:12 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	if (ft_malloc_char((ft_strlen(s1) + ft_strlen(s2)) + 1, &str))
		return (NULL);
	while (s1[i] != 0)
		str[j++] = s1[i++];
	i = 0;
	while (s2[i] != 0)
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}

static void	ft_init_join_index(int *i, int *j)
{
	*i = -1;
	*j = 0;
}

void	ft_join_list(char **av, int count, char **str, char sep)
{
	int		char_count;
	int		i;
	int		j;
	int		k;

	char_count = 1;
	if (sep)
		char_count = count;
	i = -1;
	while (++i < count)
		char_count += ft_strlen(av[i]);
	if (ft_malloc_char(char_count, str))
	{
		ft_init_join_index(&i, &j);
		while (++i < count)
		{
			k = -1;
			while (av[i][++k])
				(*str)[j + k] = av[i][k];
			j += k;
			if (sep)
				(*str)[j++] = sep;
		}
		(*str)[--j] = 0;
	}
}
