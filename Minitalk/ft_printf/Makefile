# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 13:25:37 by mabdulla          #+#    #+#              #
#    Updated: 2022/09/06 10:35:27 by mabdulla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_puthex_low.c ft_putnbr.c ft_putunbr.c ft_printf.c ft_putchar.c ft_puthex_up.c ft_putstr.c ft_second_controller.c ft_cntrl_plus.c ft_cntrl_zero.c ft_atoi.c ft_numlen.c ft_putnbr_zero.c ft_putunbr_zero.c ft_putzero.c ft_hexlen.c ft_cntrl_dot.c ft_putnbr_dot.c ft_putstr_dot.c ft_cntrl_minus.c ft_putnbr_minus.c ft_putspace.c ft_putunbr_minus.c ft_putstr_minus.c ft_ptrlen.c ft_cntrl_sharp.c ft_cntrl_space.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

BONUS = ft_puthex_low.c ft_putnbr.c ft_putunbr.c ft_printf.c ft_putchar.c ft_puthex_up.c ft_putstr.c ft_second_controller.c ft_cntrl_plus.c ft_cntrl_zero.c ft_atoi.c ft_numlen.c ft_putnbr_zero.c ft_putunbr_zero.c ft_putzero.c ft_hexlen.c ft_cntrl_dot.c ft_putnbr_dot.c ft_putstr_dot.c ft_cntrl_minus.c ft_putnbr_minus.c ft_putspace.c ft_putunbr_minus.c ft_putstr_minus.c ft_ptrlen.c ft_cntrl_sharp.c ft_cntrl_space.c ft_strlen.c
BONUS_OBJS = $(BONUS:.c=.o)

INCS = ft_printf.h
NAME = libftprintf.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

$(NAME) : ${OBJS} 
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

.c.o :
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean :
	@${RM} ${OBJS} ${BONUS_OBJS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

bonus :	$(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@ranlib $(NAME)

.PHONY: all clean fclean re .c.o bonus