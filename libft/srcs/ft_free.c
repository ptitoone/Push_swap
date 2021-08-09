
#include "libft.h"

t_bool	ft_free_char(char **str)
{
	if (*str)
		free(*str);
	*str = NULL;
	return (FALSE);
}

t_bool	ft_free_int(int **tab)
{
	if (*tab)
		free(*tab);
	*tab = NULL;
	return (FALSE);
}

