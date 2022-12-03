/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 01:31:32 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:30:00 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		s = '0' + n % 10;
	}
	else if (n < 10)
	{
		s = '0' + n;
	}
	write (fd, &s, 1);
}
/* #include <stdio.h>
int main (void)
{
    ft_putnbr_fd(305, 1);
    ft_putnbr_fd(-12, 1);
    return (0);
}*/
