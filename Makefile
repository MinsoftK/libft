# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsungk </var/mail/minsungk>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 14:25:49 by minsungk          #+#    #+#              #
#    Updated: 2020/12/21 14:25:52 by minsungk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
RM		= rm -f
SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
		  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		  ft_calloc.c ft_strdup.c ft_substr.c \
		  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= $(SRCS:.c=.o)

#BSRCS	=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		  ft_lstmap.c \
		  ft_isupper_bonus.c ft_islower_bonus.c ft_isnumber_bonus.c \
		  ft_isblank_bonus.c ft_strndup_bonus.c ft_strnul_bonus.c \
		  ft_strpush_bonus.c get_next_line_bonus.c

#BOBJS	= $(BSRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all	: $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus:	$(OBJS) $(BOBJS) $(POBJS)
	ar rc $(NAME) $(BOBJS) $(OBJS) $(POBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all


