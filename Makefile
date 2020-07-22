# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/12 15:15:26 by lbonatti          #+#    #+#              #
#    Updated: 2020/04/25 23:32:53 by lbonatti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c\
	ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_calloc.c\
	ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c\
	ft_strjoin.c ft_itoa.c ft_strjoin.c ft_substr.c ft_strtrim.c\
	ft_split.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_strtrim.c\
	ft_strmapi.c ft_lstclear.c ft_lstmap.c ft_lstiter.c\
	ft_lstsize.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c\
	ft_lstdelone.c ft_lstnew.c

OBJ = $(subst .c,.o,$(SRCS))

LIB = libft.h

all: $(NAME)
$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS) -I $(LIB)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

bonus: re
