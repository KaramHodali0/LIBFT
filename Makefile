# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/07 14:33:24 by kalhouda          #+#    #+#              #
#    Updated: 2026/09/22 14:16:06 by kalhouda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: libft.a

all: $(NAME)

CFLAGS: -Wall -Wextra -Werror

SRCS: ft_toupper.c

OBJS: ft_tolower.o

CC: cc

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
