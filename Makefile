# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 13:11:27 by tbenedic          #+#    #+#              #
#    Updated: 2018/06/03 13:07:50 by tbenedic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCS = ft_atoi \
ft_atoi \
ft_bzero \
ft_isalnum \
ft_isalnum \
ft_isalpha \
ft_isalpha \
ft_isascii \
ft_isascii \
ft_isdigit \
ft_isdigit \
ft_isprint \
ft_isprint \
ft_memccpy \
ft_memchr \
ft_memcmp \
ft_memcpy \
ft_memmove \
ft_memset \
ft_putchar \
ft_putchar \
ft_putstr \
ft_putstr \
ft_strcat \
ft_strcat \
ft_strchr \
ft_strcmp \
ft_strcmp \
ft_strcpy \
ft_strcpy \
ft_strdup \
ft_strlen \
ft_strlen \
ft_strncat \
ft_strncmp \
ft_strncmp \
ft_strncpy \
ft_strncpy \
ft_strnstr \
ft_strrchr \
ft_strstr \
ft_strstr \
ft_tolower \
ft_tolower \
ft_toupper \
ft_toupper \

SRCC = $(addsuffix .c, $(FUNCS))
SRCO = $(addsuffix .o, $(FUNCS)) 

HEAD = libft.h

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRCC)
		ar rc $(NAME) $(SRCO)
		ranlib $(NAME)

clean:
		rm -f $(SRCO)

fclean:
		rm -f $(NAME)

re: fclean all
