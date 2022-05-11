/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:20:11 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/16 12:49:18 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	unsigned char	*srcs;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	srcs = (unsigned char *)src;
	if (len == 0 || dest == src)
		return (dest);
	while (i < len)
	{
		if (dest > src)
		{
			dst[len - 1] = srcs[len - 1];
			len--;
		}
		else
		{
			dst[i] = srcs[i];
			i++;
		}
	}
	return (dest);
}
