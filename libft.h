#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

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
void *ft_calloc(size_t nmemb, size_t size);
void *ft_memchr(const void *s, int c, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t size);
char *ft_strrchr(const char *s, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dsize);
int ft_atoi(const char *str);
#endif // !LIBFT_H
