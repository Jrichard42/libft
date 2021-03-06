# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrichard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 16:20:38 by jrichard          #+#    #+#              #
#    Updated: 2017/04/13 18:03:20 by jrichard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR = .

SRC = ft_atoi.c ft_lstadd_end.c	ft_memchr.c	ft_putnbr.c	ft_strctrim.c ft_strmapi.c ft_strsub.c ft_bzero.c \
	  ft_lstdel.c ft_memcmp.c ft_putnbr_fd.c ft_strdel.c ft_strncat.c ft_strtrim.c ft_isalnum.c ft_lstdelone.c \
  	  ft_memcpy.c ft_putstr.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_isalpha.c ft_lstiter.c ft_memdel.c \
  	  ft_putstr_fd.c ft_strequ.c ft_strncpy.c ft_toupper.c ft_isascii.c	ft_lstmap.c	ft_memmove.c ft_realloc.c \
	  ft_striter.c ft_strnequ.c ft_isdigit.c ft_lstnew.c ft_memset.c ft_strcat.c ft_striteri.c ft_strnew.c \
	  ft_isprint.c ft_lstsearch.c ft_putchar.c ft_strchr.c ft_strjoin.c ft_strnstr.c ft_isspace.c ft_lstsize.c \
	  ft_putchar_fd.c ft_strclr.c ft_strlcat.c ft_strrchr.c ft_itoa.c ft_memalloc.c ft_putendl.c ft_strcmp.c \
	  ft_strlen.c ft_strsplit.c ft_lstadd.c ft_memccpy.c ft_putendl_fd.c ft_strcpy.c ft_strmap.c ft_strstr.c \
	  get_next_line.c get_next_line2.c ft_lstcheck.c ft_isblank.c ft_kvlexer.c ft_kvlexer2.c ft_atof.c \
	  ft_error.c ft_itoa_base.c ft_ltoa.c ft_uitoa.c ft_ultoa.c ft_ltoa_base.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra

all : $(NAME)

$(NAME) :
	gcc -c $(SRC) $(CFLAGS) -I$(INC_DIR)
	ar rc $@ $(OBJ)
	ranlib $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
