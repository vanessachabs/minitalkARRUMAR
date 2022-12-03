/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 01:25:40 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:28:43 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
/* #include <stdio.h>
int main (void)
{
    ft_putendl_fd("42rio", 1);
    ft_putendl_fd("funcao putstr", 1);
    return (0);
}*/
