# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akadi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 12:30:07 by akadi             #+#    #+#              #
#    Updated: 2021/12/29 10:54:41 by akadi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = cc
flags = -Wall -Wextra -Werror
src = ft_printf.c ft_putchar.c \
	  ft_putnbr.c ft_putstr.c \
	  ft_putunsigned.c ft_lowhexa.c \
	  ft_upperhexa.c
obj = $(src:.c=.o)

all : $(NAME)

$(NAME) : $(obj)
	ar -rc $(NAME) $(obj)
%.o : %.c ft_printf.h
	$(cc) $(flags) -c $< -o $@
clean :
	rm -rf $(obj)
fclean :
	rm -rf $(obj) $(NAME)
re : fclean all

.PHONY : all fclean clean re
