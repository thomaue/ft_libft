#ifndef FILE_H
#define FILE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    bzero(void *s, size_t n);
void *memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);


char *ft_itoa(int nbr);
int ft_atoi(char *str);


int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int ft_isprint(int c);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif