# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 12:03:51 by mabdulla          #+#    #+#              #
#    Updated: 2022/09/06 10:34:29 by mabdulla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c
OBJS = $(SRCS:.c=.o)

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUS_OBJS = $(BONUS:.c=.o)

INCS = libft.h
NAME = libft.a
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
