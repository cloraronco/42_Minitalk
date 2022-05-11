/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:10:06 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/08 16:12:17 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	compteur;

	i = 0;
	compteur = 0;
	while (src[compteur])
		compteur++;
	if (n == 0)
		return (compteur);
	while (i < n - 1 && src[i])
	{		
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (compteur);
}
