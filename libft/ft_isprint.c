/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 07:37:57 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:17:28 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "18\t k\n";
    int i;
    i = 0;
    while (str[i])
    {
        if (ft_isprint(str[i]) !=0)
            printf("%c é printavel\n", str[i]);
        else
            printf("%c não é printavel\n", str[i]);
        i++;
    }
}*/
