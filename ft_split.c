/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:01:41 by ozdemir           #+#    #+#             */
/*   Updated: 2023/10/24 14:12:33 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	countwords(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_word(char *s, char c)
{
	char	*tab;
	int		wlen;
	int		i;

	wlen = 0;
	while (s[wlen] != c)
		wlen++;
	tab = malloc(sizeof(char) * wlen + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < wlen)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*str;
	int		i;

	i = 1;
	str = (char *)s;
	tab = malloc(sizeof(char *) * (countwords(str, c) + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		if (*str != '\0')
		{
			tab[i] = ft_word(str, c);
			i++;
		}
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void)
{
	char s[] = "plus,msmc,ou,an94";
	char c = ',';

	char **result = ft_split(s, c);

	if (result)
	{
		int i = 0;
		while (result[i] != NULL)
		{
			printf("Word %d: %s\n", i, result[i]);
			i++;
		}
		i = 0;
		while (result[i] != NULL)
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}*/