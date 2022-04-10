# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:10:39 by lporras-          #+#    #+#              #
#    Updated: 2022/04/10 18:54:41 by lporras-         ###   ########.fr        #
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
		ft_memmove.c 	\
		ft_tolower.c 	\
		ft_toupper.c 	\
		ft_strlen.c 	\
		ft_strlcat.c 	\
		ft_strchr.c 	\
		ft_strlcpy.c	\
		ft_strrchr.c 	\
		ft_strncmp.c 	\
		ft_memcmp.c 	\

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
