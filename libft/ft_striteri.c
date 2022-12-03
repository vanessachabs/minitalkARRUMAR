/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:40:10 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/20 00:54:58 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* #include <stdio.h>
 char f(unsigned int i, char ch)
 {
     printf("%d - %c\n", i, ch);
     return (ch);
 }
 int main(void)
 {
     char s1[] = "abcdfegh";
     char (*ft)(unsigned int, char);
     ft = f;
     ft_striteri(s1, (void *)ft);

     return (0);
 }*/
