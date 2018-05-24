# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshumba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 11:10:00 by dshumba           #+#    #+#              #
#    Updated: 2018/05/24 14:09:20 by dshumba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
OBJECT = 	ft_*.o
CFLAGS	=	-Wall -Werror -Wextra
FILES = ft_*.c

all: library

library: object 	
	ar -rc $(NAME) $(OBJECT)

object:
	$(CC) -c $(CFLAGS) $(FILES)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
