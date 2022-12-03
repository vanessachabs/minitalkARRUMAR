/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 00:38:59 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/19 22:38:32 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}
/* #include <stdio.h>
int main (void)
{
    ft_putstr_fd("42rio\n", 1);
    ft_putstr_fd("funcao putstr\n", 1);
    return (0);
}*/
