# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:10:39 by lporras-          #+#    #+#              #
#    Updated: 2022/04/03 19:44:14 by lporras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_bzero.c		\
	  	ft_isalnum.c	\
		ft_isalpha.c 	\
		ft_isascii.c 	\
		ft_isdigit.c 	\
		ft_isprint.c 	\
		ft_memcpy.c 	\
		ft_memset.c 	\
		ft_tolower.c 	\
		ft_toupper.c 	\

INCLUDES = libft.h

#OBJ_BONUS = $(SRC_BONUS:.c=.o)
OBJ = $(SRC:.c=.o)

CC = gcc
AR = ar rc
CFLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $(OBJ)
	
	
%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
