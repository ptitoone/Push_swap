/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:21:51 by akotzky           #+#    #+#             */
/*   Updated: 2021/06/17 09:09:21 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list	t_list;
struct				s_list
{
	void		*content;
	struct s_list	*next;
};

typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *str, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
t_bool		ft_strisdigit(char *str);
t_bool		ft_strisnumber(char *str);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strncpy(char *dest, const char *src, unsigned int n);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *chain, const char *key, size_t n);
char		*ft_strstr(const char *chain, const char *key);
void		ft_strrev(char *str);
int			ft_atoi(const char *str);
long int	ft_atol(const char *str);
void		*ft_calloc(size_t nitems, size_t size);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_join_list(char **av, int count, char **str, char sep);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(const char *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_recursive_power(int nb, int power);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		del(void *content);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		free_split(char **split);

t_bool		ft_malloc_char(int size, char **tab);
t_bool		ft_malloc_int(int size, int **tab);
t_bool		ft_malloc_float(int size, int **tab);
t_bool		ft_malloc_double(int size, int **tab);

t_bool 		ft_free_char(char **str);
t_bool		ft_free_int(int **tab);

#endif
