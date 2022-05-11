/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:29:16 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/22 15:07:45 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_check_charset(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	len;
	unsigned int	start;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	len = ft_strlen((char *)s1);
	while (s1[start] && ft_check_charset((char *)set, s1[start]) == 1)
		start++;
	while (len > start && ft_check_charset((char *)set, s1[len - 1]) == 1)
		len--;
	str = ft_substr(s1, start, ((len) - start));
	if (!str)
		return (NULL);
	while (start < len)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
