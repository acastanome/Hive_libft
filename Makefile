#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 16:14:56 by acastano          #+#    #+#              #
#    Updated: 2021/11/10 20:25:39 by acastano         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_putnbr.c srcs/ft_strclr.c srcs/ft_strequ.c srcs/ft_putendl.c srcs/ft_isalpha.c srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_isdigit.c

HEADERS = includes

OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_putnbr.o ft_strclr.o ft_strequ.o ft_putendl.o ft_isalpha.o ft_tolower.o ft_toupper.o ft_isdigit.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I$(HEADERS)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) *.c~ *.h~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
