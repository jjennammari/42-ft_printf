# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 19:49:16 by jemustaj          #+#    #+#              #
#    Updated: 2024/12/07 23:00:02 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
EXEC = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rsc
RM = r -rdf

SRC =
OBJC = $(SRC: .c=.o)

all: $(NAME)

$(NAME): $(OBJC)
       $(AR) $(NAME) $(OBJC)

clean:
	$(RM) $(OBJC)

fclean: clean
	$(RM) $(NAME)

re: fclean all
