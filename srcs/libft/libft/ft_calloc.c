/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:53:18 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/22 17:18:48 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc((elementSize * elementCount) * sizeof(char));
	if (!str)
		return (NULL);
	while (i != (elementSize * elementCount))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
