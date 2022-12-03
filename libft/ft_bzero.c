/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:29:55 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:11:29 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		((unsigned char *)s)[i] = 0;
	}
}
/*
 #include <stdio.h>
 int main (int argc, char const *argv[])
 {
     char s[11] = "Hello World";
     ft_bzero(s, 4);
     for (int i = 0; i < 11; i++) printf("%d\n", s[i]); 
     return 0;
 }*/
