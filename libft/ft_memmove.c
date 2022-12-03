/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:25:44 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:27:43 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	size_t			i;

	i = -1;
	tmp_d = (unsigned char *)dest;
	if (!tmp_d && !(unsigned char *)src)
		return (NULL);
	if (((unsigned char *)src > tmp_d))
	{
		while (++i < n)
		{
			tmp_d[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		while (n--)
		{
			tmp_d[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string : %s\n ", str);
     
    ft_memmove(first + 8, first, 10);
    printf("my function memmove : %s\n ", str);
 
    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);
    return 0;
}*/
