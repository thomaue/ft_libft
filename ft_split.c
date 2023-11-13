/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:38:34 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:38:34 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_c(char c_s, char c)
{
	return (c_s == c);
}

unsigned int	count_word(char const *s, char c)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i + 1])
	{
		if (is_c(s[i], c) && !is_c(s[i + 1], c))
			count += 1;
		else if (i == 0 && !is_c(s[i], c))
			count += 1;
		i++;
	}
	return (count);
}

char	*mal_str(char const *s, char c, int *ptr)
{
	size_t	len;
	char	*dup;

	len = 0;
	while (is_c(s[*ptr], c) && s[*ptr])
		(*ptr)++;
	while (!is_c(s[*ptr], c) && s[*ptr])
	{
		(*ptr)++;
		len++;
	}
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	(*ptr) -= len;
	len = 0;
	while (!is_c(s[*ptr], c) && s[*ptr])
	{
		dup[len] = s[*ptr];
		(*ptr)++;
		len++;
	}
	dup[len] = '\0';
	return (dup);
}

char	**tab_tab_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		pos;
	int		count;

	i = 0;
	pos = 0;
	count = count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	while (i < count)
	{
		pos = 0;
		tab[i] = mal_str(s, c, &pos);
		s += pos;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_split;

	if (!s)
		return (NULL);
	tab_split = tab_tab_split(s, c);
	return (tab_split);
}

// int	main(void)
// {
// 	const char str[] = "salut les petits potes";

// 	char **tab = ft_split(str, ' ');

// 	for(int i = 0; tab[i]; i++)
// 		printf("%s\n", tab[i]);

// 	for(int i = 0; tab[i]; i++)
// 		free(tab[i]);
// 	return (0);
// }
