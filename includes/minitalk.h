/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:43:30 by clora-ro          #+#    #+#             */
/*   Updated: 2022/05/11 07:53:59 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "../srcs/libft/libft/libft.h"
# include <signal.h>

void	ft_display_pid(void);
void	ft_send_message(int pid, char *str);
void	ft_receive_message(int signal);

#endif