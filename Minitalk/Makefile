# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 11:29:18 by mabdulla          #+#    #+#              #
#    Updated: 2022/09/06 10:38:09 by mabdulla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SRCLIENT =   client.c
OBJSCLIENT = $(SRCLIENT:.c=.o)

SRCSERVER = server.c
OBJSERVER = $(SRCSERVER:.c=.o)

CFLAGS = -Wall -Wextra -Werror
LIB = ./Libft/libft.a
PRNT = ./ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJSERVER) $(OBJSCLIENT)
	@make -C ./Libft
	@make -C ./ft_printf
	@gcc -o server $(SRCSERVER) $(CFLAGS) $(PRNT) $(LIB)
	@gcc -o client $(SRCLIENT) $(CFLAGS) $(PRNT) $(LIB)

clean:
	@rm -f $(OBJSERVER) $(OBJSCLIENT)
	@make -C ./ft_printf clean
	@make -C ./Libft clean

fclean: clean
	@rm -f server client
	@make -C ./ft_printf fclean
	@make -C ./Libft fclean

re: fclean all

.PHONY: all clean fclean re