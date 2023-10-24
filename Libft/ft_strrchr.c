/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:23:26 by ozdemir           #+#    #+#             */
/*   Updated: 2023/10/20 17:32:40 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = NULL;
	while (*s)
	{
		if ((unsigned char *)*s == (unsigned char)c)
			res = s;
		s++;
	}
	if ((unsigned char *)*s == (unsigned char)c)
		res = s;
	if (res != NULL)
		return (res);
	return (NULL);
}
/*
int	main(void)
{
	const char *str = "Hello, World!";
	int c = 'o';

	char *result = ft_strchr(str, c);
	if (result != NULL)
	{
		printf("Le caractère '%c' a été trouvé à la position : %ld\n", c,
			result - str);
	}
	else
	{
		printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n",
			c);
	}
	return (0);
}*/