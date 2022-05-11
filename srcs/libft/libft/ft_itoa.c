/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:23:26 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/22 17:19:34 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_n(int nbr)
{
	long int	n;
	long int	len;

	n = nbr;
	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	i;
	long int	len_n;
	char		*str;
	long int	begin;

	i = n;
	len_n = ft_len_n(i);
	begin = 0;
	str = (char *)malloc(len_n + 1);
	if (!str)
		return (NULL);
	if (i < 0)
	{
		i *= -1;
		begin = 1;
		str[0] = '-';
	}
	str[len_n--] = '\0';
	while (len_n >= begin)
	{
		str[len_n--] = i % 10 + '0';
		i = i / 10;
	}
	return (str);
}
