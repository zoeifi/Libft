# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:10:39 by lporras-          #+#    #+#              #
#    Updated: 2022/05/20 20:14:23 by lporras-         ###   ########.fr        #
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
		ft_strnstr.c 	\
		ft_memcmp.c 	\
		ft_atoi.c 		\
		ft_calloc.c 	\
		ft_strdup.c 	\
		ft_substr.c 	\
		ft_strjoin.c 	\
		ft_strtrim.c 	\
		ft_itoa.c 		\
		ft_strmapi.c 	\
		ft_striteri.c 	\
		ft_putchar_fd.c \
		ft_putstr_fd.c 	\
		ft_putendl_fd.c \
		ft_putnbr_fd.c 	\
		ft_memchr.c 	\
		ft_split.c		\

SRC_BONUS = ft_lstnew_bonus.c 			\
			ft_lstadd_front_bonus.c 	\
			ft_lstsize_bonus.c			\
			ft_lstlast_bonus.c			\
			ft_lstadd_back_bonus.c 		\
			ft_lstdelone_bonus.c 		\
			ft_lstclear_bonus.c 		\
			ft_lstiter_bonus.c 			\
			ft_lstmap_bonus.c 			\
					
INCLUDES = libft.h


OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc
AR = ar rc
CFLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $(OBJ) 
	
%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC) $(SRC_BONUS)

bonus: $(OBJ) $(OBJ_BONUS)
			ar rc $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	$(CC) -g $(SRC) main.c

.PHONY: all clean fclean re
