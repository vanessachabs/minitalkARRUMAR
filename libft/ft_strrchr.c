/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:53:35 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/20 01:41:19 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			s_len;
	unsigned char	*str;

	s_len = ft_strlen(s);
	str = (unsigned char *)s;
	while (s_len + 1 > 0)
	{
		if (str[s_len] == (unsigned char)c)
			return ((char *)(str + s_len));
		s_len--;
	}
	return (0);
}
/* #include <stdio.h>
 int main () {
     char *s = "lana banana nana!";
     printf("%s\n", ft_strrchr(s,'a'));
     return(0);
 }*/
