#ifndef FILE_H
#define FILE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n);
void *ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);


char *ft_itoa(int nbr);
int ft_atoi(char *str);


int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_strlen(char *str);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int toupper(int c);
int tolower(int c);

#endif