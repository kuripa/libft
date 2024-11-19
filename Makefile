# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 01:21:41 by nfuhrman          #+#    #+#              #
#    Updated: 2024/11/19 05:06:04 by nfuhrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar

CFLAGS = -Wall -Werror -Wextra
ARFLAGS = rcs
DEBUG_FLAGS = -g -O0

NAME = libft.a

# List your source files
SRCS =	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strchr.c\
	 	ft_strncmp.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\

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

debug: CFLAGS += $(DEBUG_FLAGS)
debug: re

debug_test: debug
	@cd tests && mkdir -p build && cd build && cmake -DENABLE_DEBUG=ON ... && make
	

# Phony targets
.PHONY: all clean fclean re test runtests debug debug_test
