#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n);
void *ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int ft_memcmp( const void * pointer1, const void * pointer2, size_t size );
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);


char *ft_itoa(int nbr);
int ft_atoi(const char *str);


int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);


size_t ft_strlen(const char *str);
int	ft_strncmp(const char *s1,const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *  s1 , const char *  s2 , size_t  len);
char *ft_strjoin(char const *s1, char const *s2);


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);

char *ft_substr(char const *s, unsigned int start, size_t len);


#endif