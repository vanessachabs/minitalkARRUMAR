/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:10:03 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:08:15 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main() {
    int c;
    c = '2';
    if (ft_isalnum(c) != 0 )
        printf("é alfanumero");
    else
        printf("Não alfanumero");
    return (0);
}*/
