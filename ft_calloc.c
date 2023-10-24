/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:30:25 by ozdemir           #+#    #+#             */
/*   Updated: 2023/10/20 17:24:31 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nb, size_t taille)
{
	void	*res;

	res = malloc(nb * taille);
	if (!res)
		return (NULL);
	ft_memset(res, 0, nb * taille);
	return (res);
}
