/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:24:54 by vchastin          #+#    #+#             */
/*   Updated: 2022/12/03 17:28:09 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	send_char(int server_id, unsigned int c)
{
	int	mod;
	int	i;
	int	status_kill;
	int	array[8];

	i = 7;
	while (i >= 0)
	{
		mod = c % 2;
		array[i--] = mod;
		c = c / 2;
	}
	i = 0;
	while (i <= 7)
	{
		if (array[i++] == 1)
			status_kill = kill(server_id, SIGUSR1);
		else
			status_kill = kill(server_id, SIGUSR2);
		if (status_kill == -1)
			ft_putstr_fd("Error: Failed to send the SIGUSR signal", 1);
		usleep(500);
	}
}

int	main(int argc, char **argv)
{
	int	server_pid;

	if (argc != 3)
	{
		ft_putstr_fd("Error: invalid argument number", 1);
		exit (1);
	}
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		ft_putstr_fd("Error: invalid process ID", 1);
		exit (1);
	}
	while (*argv[2])
		send_char(server_pid, *argv[2]++);
	return (0);
}
