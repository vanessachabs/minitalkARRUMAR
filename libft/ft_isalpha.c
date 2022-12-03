/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:58:33 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/19 22:00:47 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
 int main()
 {
     char c;
     c = '8';
     if(ft_isalpha(c) == 0)
         printf("%c não é um alfabeto", c);
     else
         printf("%c é um alfabeto", c);
 }*/
