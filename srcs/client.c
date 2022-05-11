/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:41:58 by clora-ro          #+#    #+#             */
/*   Updated: 2022/05/11 08:27:02 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	ft_send_message(int pid, char *str)
{
	int	i;
	int	current_bit;

	i = 0;
	current_bit = 0;
	while (str[i])
	{
		while (current_bit < 8)
		{
			if (str[i] & (1 << current_bit))
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			current_bit++;
			usleep(100);
		}
		current_bit = 0;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		pid;

	if (argc != 3)
	{
		ft_putendl_fd("Wrong arguments", 2);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0 || pid > 99998)
	{
		ft_putendl_fd("Wrong PID value", 2);
		return (1);
	}
	ft_send_message(pid, argv[2]);
	return (0);
}
