CC = cc
AR = ar

CFLAGS = -Wall -Werror -Wextra
ARFLAGS = rcs

NAME = libft.a

# List your source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c

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

# Run tests after building
runtests: test
	cd tests/build && ./run_tests

# Phony targets
.PHONY: all clean fclean re test runtests
