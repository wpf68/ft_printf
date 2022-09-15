# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 12:36:37 by pwolff            #+#    #+#              #
#    Updated: 2022/03/02 09:29:12 by pwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PRG = printf

MAIN = main.c

INCL = includes

SRCS = ft_putchar_fd.c ft_printf.c ft_printf_c.c ft_printf_s.c ft_strlen.c \
	ft_putstr_fd.c ft_itoa.c ft_printf_d_i.c ft_itoa_unsigned.c \
	ft_printf_u.c ft_rev_char_tab.c ft_hex_lower.c ft_printf_x.c \
	ft_toupper.c ft_isascii.c ft_printf_p.c ft_hex_lower_long.c
	
	
OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

RM = rm -f

#RED = \033[1;31m
#GREEN = \033[1;32m
#YELLOW = \033[1;33m
#RESET = \033[0m

CC = gcc

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
#	@echo "$(RED)------done------$(RESET)"
#	ranlib ${NAME}

all: ${NAME}
#	@echo "$(RED)------done------$(RESET)"

main: all
	${CC} ${FLAGS} ${MAIN} ${NAME} -o ${PRG}

clean:
	${RM} ${OBJS}
#	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all main clean fclean re
