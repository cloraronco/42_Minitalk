/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:58:32 by clora-ro          #+#    #+#             */
/*   Updated: 2022/02/21 11:46:57 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char *src, int n, int pos)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	while (src[pos] && i < n)
	{
		dest[i] = src[pos];
		i++;
		pos++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**free_return(char **dest, int count)
{
	count -= 1;
	while (count >= 0)
	{
		free(dest[count]);
		count--;
	}
	free(dest);
	return (NULL);
}

static int	ft_check_lines(char *str, char charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		while (charset == str[i] && str[i])
			i++;
		j = 0;
		while (charset != str[i] && str[i])
		{
			i++;
			j++;
		}
		if (j > 0)
			count++;
	}
	return (count);
}

static void	var_init(int *i, int *count)
{
	*i = 0;
	*count = -1;
}

char	**ft_split(const char *s, char charset)
{
	int		i;
	int		j;
	int		count;
	char	**dest;

	dest = malloc(sizeof(char *) * (ft_check_lines((char *)s, charset) + 1));
	if (!dest)
		return (NULL);
	var_init(&i, &count);
	while (s[i])
	{
		while (charset == s[i] && s[i])
			i++;
		j = 0;
		while (charset != s[i] && s[i] && i++ >= 0)
			j++;
		if (j > 0)
		{
			dest[++count] = ft_strndup((char *)s, j, (i - j));
			if (dest[count] == NULL)
				return (free_return(dest, count));
		}
	}
	dest[++count] = 0;
	return (dest);
}
