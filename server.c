/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:02:45 by vchastin          #+#    #+#             */
/*   Updated: 2022/12/03 17:10:14 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_pow(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * ft_pow(base, --exp));
}

void	handle_signal(int signum)
{
	static int	nbit = 8;
	static int	ch = 0;

	if (--nbit >= 0 && signum == SIGUSR1)
		ch += ft_pow(2, nbit);
	if (nbit == 0)
	{
		if (!ch)
			write(1, "\n",1);
		else
			write (1, &ch, 1);
		nbit = 8;
		ch = 0;
	}

}

void	print_pid(void)
{
	write(1, "pid:", 4);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
}

void	init_server(void)
{
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
}

int	main(void)
{
	print_pid();
	init_server();
	return (0);
}
