#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 16:14:56 by acastano          #+#    #+#              #
#    Updated: 2021/11/15 21:32:42 by acastano         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_putnbr.c srcs/ft_strclr.c srcs/ft_strequ.c srcs/ft_putendl.c srcs/ft_isalpha.c srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c srcs/ft_isprint.c srcs/ft_atoi.c srcs/ft_strcmp.c srcs/ft_strncmp.c srcs/ft_strnequ.c srcs/ft_strstr.c srcs/ft_strnstr.c srcs/ft_memset.c

HEADERS = includes

OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_putnbr.o ft_strclr.o ft_strequ.o ft_putendl.o ft_isalpha.o ft_tolower.o ft_toupper.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_atoi.o ft_strcmp.o ft_strncmp.o ft_strnequ.o ft_strstr.o ft_strnstr.o ft_memset.o

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
