/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:29:14 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 17:20:12 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	signal;

	i = 0;
	res = 0;
	signal = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-' )
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * signal);
}
/*
include <stdio.h>
int main () {
    int val;
    char *str = "    20";
    val = ft_atoi(str);
    printf("String = %s, Int = %d\n", str, val);
    str = "23333444";
    val = ft_atoi(str);
    printf("String = %s, Int = %d\n", str, val);
    return(0);
 } 
*/
