/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:17:50 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/22 15:17:32 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return ;
	len = ft_strlen((char *)s);
	while (i < len)
	{
		f(i, (char *)&s[i]);
		i++;
	}
}
