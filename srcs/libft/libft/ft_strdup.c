/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:18:47 by clora-ro          #+#    #+#             */
/*   Updated: 2022/04/21 10:11:21 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*cpy;
	int		i;

	i = 0;
	if (!source)
		return (NULL);
	cpy = malloc((ft_strlen(source) + 1) * (sizeof(char)));
	if (!cpy)
		return (NULL);
	while (source[i])
	{
		cpy[i] = source[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
