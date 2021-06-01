# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 16:21:52 by rsiqueir          #+#    #+#              #
#    Updated: 2021/05/31 16:51:49 by rogeriorslf      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f
RMDIR = rmdir

SRCS =	ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_strncmp.c	\
		ft_atoi.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strtrim.c	\
		ft_strjoin.c	\
		ft_strmapi.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c

BONUS = ft_lstnew.c			\
		ft_lstlast.c		\
		ft_lstsize.c		\
		ft_lstclear.c		\
		ft_lstadd_front.c	\
		ft_lstadd_back.c	\
		ft_lstiter.c		\
		ft_lstdelone.c		\
		ft_lstmap.c

NEW =	ft_strcpy.c		\
		ft_nstrcpy.c	\
		ft_free_all.c	\
		ft_int_length.c	\
		ft_ncalloc.c

#.c to .o
OBJ =			${SRCS:%.c=%.o}
BONUS_OBJ =		${BONUS:%.c=%.o}
NEW_OBJ =		${NEW:%.c=%.o}

all:		${NAME}

${NAME}:	${OBJ}	${NEW_OBJ}
			${AR}	${NAME}		${OBJ}			${NEW_OBJ}

#regra implicita, desnecessário.
%.o:		%.c
			${CC}	${CFLAGS}	$< -o $@

clean:
			${RM}	${OBJ}		${BONUS_OBJ}	${NEW_OBJ}

fclean:		clean
			${RM}	${NAME}

re: fclean all

bonus:		${NAME}	${BONUS_OBJ}
			${AR}	${NAME}		${BONUS_OBJ}

.PHONY: all clean fclean re
