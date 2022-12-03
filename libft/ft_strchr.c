/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:36:51 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/20 02:08:21 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}
/*
 #include <stdio.h>
 #include <string.h>
 int main () {
     const char str[] = "http://www.google.com";
     const char ch = '-';
     char *ret;

     ret = strchr(str, ch);
     printf("FUNCTION ORIGINAL: String after |%c| is - |%s|\n", ch, ret);
     ret = ft_strchr(str, ch);
     printf("FUCTION BY ME: String after |%c| is - |%s|\n", ch, ret);
     return(0);
 }*/
