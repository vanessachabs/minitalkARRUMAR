/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:09:57 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:21:16 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
    char str[] = "18\tªºk\n片仮名";
    int i;
    i = 0;
    while (str[i])
    {
        if (ft_isascii(str[i]) !=0)
            printf("%c é caractere ASCII\n", str[i]);
        else
            printf("%c não é caractere ASCII\n", str[i]);
        i++;
    }
}*/
