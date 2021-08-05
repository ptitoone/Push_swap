# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 13:32:00 by akotzky           #+#    #+#              #
#    Updated: 2021/06/23 17:45:35 by akotzky          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
NAME_BONUS	=	checker

SRCS		:=	$(shell echo srcs/*.c srcs/utils/*.c srcs/sort/*.c srcs/sort/moves/*.c)
OBJS		=	$(SRCS:.c=.o)

LIBFT		=	libft.a
INCLS		=	-Iincls

CLFAGS		=	-Wall -Wextra -Werror
CC			=	gcc

.PHONY		=	all bonus clean fclean re

all : $(LIBFT) $(NAME)

$(LIBFT) :
	@make -C libft/ all
	@cp libft/$(LIBFT) .
	@cp libft/incls/libft.h incls/libft.h
	@cp libft/incls/ft_printf.h incls/ft_printf.h
	@cp libft/incls/get_next_line.h incls/get_next_line.h

$(NAME) : echobjs $(OBJS)
	$(info - Linking push_swap binary...)
	@$(CC) $(OBJS) -L . -lft -o $(NAME)

%.o : %.c
	@$(CC) -g $(INCLS) -c $< -o $@

clean : 
	$(info - Cleaning push_swap object files...)
	@rm -rf $(OBJS)
	@make -C libft/ clean

fclean : clean
	$(info - Cleaning push_swap header and executable files...)
	@rm -rf $(NAME) $(LIBFT) incls/libft.h incls/ft_printf.h incls/get_next_line.h
	@make -C libft/ fclean

re : fclean all
	$(info - Recompiling push_swap project...)

echobjs :
	$(info - Assembling push_swap object files...)
