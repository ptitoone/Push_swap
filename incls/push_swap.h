/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:56:30 by akotzky           #+#    #+#             */
/*   Updated: 2021/08/04 17:23:34 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

typedef	struct s_elem	t_elem;

struct	s_elem
{
	int 	value;
	int		index;
	t_elem	*prev;
	t_elem	*next;
};

typedef struct	s_range
{
	int bound;
	int	offset;
	int	range_min;
	int range_max;
	int	piv;
}				t_range;

typedef struct	s_stack
{
	t_elem	*head;
	int		count;
	char	stack;
}				t_stack;

typedef void (*t_rotate)(t_stack *, t_bool);

void 	add_elem(t_stack *dst, t_elem *elem);
void 	del_elem(t_stack *src, t_elem **elem);
void	exit_push_swap(t_stack *stack, t_bool error);

void	init_stacks(t_stack *a, t_stack *b);
void	indexate_stack(t_stack *stack);
void	is_sorted(t_stack *stack);
void	sort(t_stack *a, t_stack *b);

void	sort_a(t_stack *s);

t_bool	rot_direction_a(t_stack *a, int range_max);
void	a_to_b(t_stack *a, t_stack *b, t_range *range);
t_bool	rot_direction_b(t_stack *b);
void	b_to_a(t_stack *a, t_stack *b);

void	quicksort(int *tab, int l, int h);

void	s(t_stack *stack, t_bool print);
void	ss(t_stack *a, t_stack *b);

void	p(t_stack *dst, t_stack *src);

void	r(t_stack *stack, t_bool print);
void	rr(t_stack *stack, t_bool print);
void	rrr(t_stack *a, t_stack *b);
void	rrrr(t_stack *a, t_stack *b);

void	print_stacks(t_stack *a, t_stack *b);

#endif
