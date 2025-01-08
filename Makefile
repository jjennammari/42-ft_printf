# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 19:49:16 by jemustaj          #+#    #+#              #
#    Updated: 2025/01/08 22:37:24 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
EXEC = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar -rsc
RM = rm -rf

SRC = ft_printf.c ft_print_c.c ft_print_s.c ft_print_d.c \
      ft_print_ptr.c ft_print_u.c ft_print_xX.c
OBJC = $(SRC:.c=.o)

TEST_SRC = main_printf.c
TEST_OBJC = $(TEST_SRC:.c=.o)

all: $(NAME)

exec: test
	./$(EXEC)

$(NAME): $(OBJC)
	$(AR) $(NAME) $(OBJC)
	@echo ">>> $(NAME) archive created <<<"

test: $(NAME) $(OBJC) $(TEST_OBJC)
	$(CC) $(CFLAGS) $(OBJC) $(TEST_OBJC)

clean:
	$(RM) $(OBJC)
	$(RM) $(TEST_OBJC)

fclean: clean
	$(RM) $(EXEC)
	$(RM) $(NAME)

re: fclean all
