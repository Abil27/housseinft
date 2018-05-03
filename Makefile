# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/03 04:19:38 by ahoussei          #+#    #+#              #
#    Updated: 2018/05/03 04:24:40 by ahoussei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Werror -Wextra
FILES = *.c
OUT = *.o
BUP = *~

all : $(NAME)

$(NAME) :
		gcc $(CFLAG) -c $(wildcard $(FILES))
		ar rc $(NAME) $(OUT)

clean :
		rm -f $(OUT)
		rm -f $(BUP)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all re

