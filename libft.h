#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memset(void *buffer, int value, size_t count);
void ft_bzero(void *buffer, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void *ft_memmove(void *dest, const void *src, size_t count);
#endif // !LIBFT_H
