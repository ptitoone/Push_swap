

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

void	init_stacks(t_stack *a, t_stack *b);
void	create_stack(t_stack *a, char **split);
void	indexate_stack(t_stack *stack);
void	quicksort(int *tab, int l, int h);

void 	add_elem(t_stack *dst, t_elem *elem);
void 	del_elem(t_stack *src, t_elem **elem);

t_bool	check_duplicates(t_stack *stack, char **split, long int value);
void	check_if_sorted(t_stack *stack);

void	exit_push_swap(t_stack *stack, t_bool error);

void	sort(t_stack *a, t_stack *b);

void	sort_a(t_stack *s);

t_bool	rot_direction_a(t_stack *a, int range_max);
void	a_to_b(t_stack *a, t_stack *b, t_range *range);
t_bool	rot_direction_b(t_stack *b);
void	b_to_a(t_stack *a, t_stack *b);

void	s(t_stack *stack, t_bool print);
void	ss(t_stack *a, t_stack *b);

void	p(t_stack *dst, t_stack *src);

void	r(t_stack *stack, t_bool print);
void	rr(t_stack *stack, t_bool print);
void	rrr(t_stack *a, t_stack *b);
void	rrrr(t_stack *a, t_stack *b);

#endif
