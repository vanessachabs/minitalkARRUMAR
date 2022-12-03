/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:14 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/19 22:42:51 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122))
		return (c - 32);
	return (c);
}
/* #include <stdio.h>
int main (void)
{
    printf("%c\n", ft_toupper(' '));
    printf("%c\n", ft_toupper(1234));
    printf("%c\n", ft_toupper('a'));

    return(0);
}*/
