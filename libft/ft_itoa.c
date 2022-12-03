/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 03:32:09 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:24:47 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_convert(char *str, long int n, int i_len)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	str[i_len--] = '\0';
	while (n)
	{
		str[i_len] = n % 10 + '0';
		i_len--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	i_len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i_len = ft_intlen(n);
	str = malloc(sizeof(char) * (i_len + 1));
	if (!str)
		return (NULL);
	ft_convert(str, n, i_len);
	return (str);
}
/*
#include <stdio.h>
int main (void)
{

    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(305));
    printf("%s\n", ft_itoa(-2147483647));
    return (0);
}*/
