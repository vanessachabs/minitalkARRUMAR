/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:02:44 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:27:01 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (0);
	while (++i < n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[] = "Isso e uma string";
    char str2[] = "Sera que isso e uma string";

    memcpy(str1, str2, 8);
    puts(str1);
    ft_memcpy(str1, str2, 8);
    puts(str1);

    return 0;
}*/
