/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:01:12 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:16:05 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main() {
    char c;
    c = '0';
    if (ft_isdigit(c) == 1)
        printf("É numero");
    else
        printf("Não é digito");

    return (0);
}*/
