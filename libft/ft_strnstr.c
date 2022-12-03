/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:53:25 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:09:08 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*s;

	i = 0;
	s = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (s[i] && i < len)
	{
		if (s[i] == little[0])
		{
			j = 0;
			while (s[i + j] == little[j] && (j + i) < len)
			{
				if (j == little_len - 1)
					return (s + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main () {
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Baz";
    char *ptr;
    ptr = ft_strnstr(largestring, smallstring, 12);
    printf("%s", ptr);
    return(0);
}*/
