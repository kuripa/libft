# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 01:21:41 by nfuhrman          #+#    #+#              #
#    Updated: 2024/11/12 19:58:55 by nfuhrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar

CFLAGS = -Wall -Werror -Wextra
ARFLAGS = rcs

NAME = libft.a

# List your source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
		ft_tolower.c\
		ft_toupper.c\

OBJS = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# Rule to compile C source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -rf $(OBJS)

# Clean up object files and the library
fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	@cd tests && mkdir -p build && cd build && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. && make
	cd tests/build && ./run_tests

# Phony targets
.PHONY: all clean fclean re test runtests
