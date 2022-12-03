/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:53:49 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/20 04:18:19 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*sub_s;

	i = 0;
	if (!s)
		return (0);
	l = ft_strlen(s);
	if (start >= l)
		return (ft_strdup(""));
	if (len >= l - start)
		len = l - start;
	sub_s = (malloc(sizeof(char) * (len + 1)));
	if (!sub_s)
		return (0);
	while (i < len)
	{
		sub_s[i] = s[start++];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
/* #include <stdio.h>
 int main(void)
 {
     char str [] = "abcdef";
     char *dest;
     int s = 0;
     int l = 9;
     dest = ft_substr(str, s, l);
     printf("%s\n",dest);
     return (0);
 }*/
