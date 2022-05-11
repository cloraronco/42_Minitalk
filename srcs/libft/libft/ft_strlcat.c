/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:22:56 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/22 13:13:46 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	len_dest = i;
	if (len_dest == size)
		return (ft_strlen((char *)src) + size);
	while (src[j] && i < size -1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ft_strlen((char *)src) + len_dest);
}
