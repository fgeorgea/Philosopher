# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 12:37:27 by fgeorgea          #+#    #+#              #
#    Updated: 2023/06/11 19:15:39 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

DIR = srcs/

SRC =	$(DIR)philo.c \
		$(DIR)init.c \
		$(DIR)lib_utils.c \
		$(DIR)time.c \
		$(DIR)str.c \
		$(DIR)debug.c \
		
OBJ = ${SRC:.c=.o}

CFLAGS =  -Werror -Wextra -Wall

REMOVE = rm -f

COMPILE = gcc $(CFLAGS) -o $(NAME)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(OBJ)

clean:
	$(REMOVE) $(OBJ)

fclean:	clean
	$(REMOVE) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re