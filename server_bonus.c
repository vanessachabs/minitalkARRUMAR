/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:23:14 by vchastin          #+#    #+#             */
/*   Updated: 2022/12/03 17:23:38 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	ft_pow(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * ft_pow(base, --exp));
}
/* Take appropriate actions for signal delivery */
void	handle_signal(int signum, siginfo_t *info, void *unused)
{
	static int				nbit = 8;
	static unsigned char	ch = 0;
	static int 				pid = 0;

	(void)unused;
	pid = info->si_pid;
	if (--nbit >= 0 && signum == SIGUSR1)
		ch += ft_pow(2, nbit);
	if (nbit == 0)
	{
		if (!ch)
		{
			write(1, "\n", 1);
			kill(pid, SIGUSR2);
		}
		write(1, &ch, 1);
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
/* Use the sa_sigaction field because the handles has two additional parameters 
 The SA_SIGINFO flag tells sigaction() to use the sa_sigaction field, not sa_handler. 
 No one should ever _receive_ SIGUSR1--it's blocked.*/
void	init_server(void)
{
	struct sigaction	sig = {0};
	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = &handle_signal;
	if (sigaction(SIGUSR1, &sig, 0) == -1)
		ft_putstr_fd("Error -> Cannot handle SIGUSR1", 1);
	if (sigaction(SIGUSR2, &sig, 0) == -1)
		ft_putstr_fd("Error -> Cannot handle SIGUSR2", 1);
	while (1)
		pause();
}

int	main(void)
{
	print_pid();
	init_server();
	return (0);
}
