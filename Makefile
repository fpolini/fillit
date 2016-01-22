# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolini <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/13 13:02:26 by fpolini           #+#    #+#              #
#    Updated: 2016/01/13 15:39:20 by fpolini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = ./srcs

SRC_NAME = 	fillit.c ft_aff_grid.c ft_carre_min.c ft_error.c\
		ft_good_teti.c ft_grid_plus.c ft_main.c ft_main_rec.c \
		ft_put_grid.c ft_put_teti.c ft_read.c ft_reset_grid.c ft_tall.c\
		ft_te_gri_verif.c ft_teti_verif.c\

LIB_NAME = 	ft_atoi.c\
		ft_bzero.c\
		ft_freetab.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_itoa_base.c\
		ft_memdel.c\
		ft_memalloc.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_putnbr_fd_n.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdel.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strncat.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strnequ.c\
		ft_strnew.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strsplit.c\
		ft_strstr.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_tall_list.c\
		ft_tall_tab.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_lstadd.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_lstnew.c

LIB_PATH = ./lib

LIB = libft.a

CPPFLAGS = -I./includes

LDFLAGS = -Llibft
LDLIBS = -lft
		
NAME = fillit

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

LIB_OBJ_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(SRC_PATH)/,$(OBJ_NAME))
LIB_SRC = $(addprefix $(LIB_PATH)/,$(LIB_NAME))
LIB_OBJ = $(addprefix $(LIB_PATH)/,$(LIB_OBJ_NAME))


all: $(LIB) $(NAME)

$(LIB): $(LIB_OBJ)
	ar rc $(LIB) $(LIB_OBJ)

$(LIB_PATH)%.o: $(LIB_PATH)%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(LIB) $(CPPFLAGS) $^ -o $@

$(SRC_PATH)%.o: $(SRC_PATH)%.c	
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ) $(LIB_OBJ)

fclean: clean
	rm -fv $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
