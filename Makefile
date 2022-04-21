# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/03/30 12:27:16 by krochefo          #+#    #+#             #
#   Updated: 2022/04/06 14:12:48 by krochefo         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

OBJS = $(SRCS:.c=.o)

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstlast.c ft_lstmap.c

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

LIBAR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBAR) $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	$(LIBAR) $(NAME) $(OBJS) $(OBJS_BONUS)	

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
