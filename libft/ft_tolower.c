/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:00 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/19 22:43:37 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
		return (c + 32);
	return (c);
}
/* #include <stdio.h>
 int main (void)
 {
     printf("%c\n", ft_tolower('A'));
     printf("%c\n", ft_tolower(1234));

     return(0);
 }*/
