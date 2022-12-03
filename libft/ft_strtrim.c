/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:21:27 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:10:05 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	ptr = ft_substr((char *)s1, 0, s1_len + 1);
	return (ptr);
}
/*#include <stdio.h>
int main (void)
{
    char *str;
	char s1[] = " lorem ipsum dolor sit amet";
	printf("%s\n",ft_strtrim(s1, "l "));
    str = ft_strtrim("amiga", "ga");
			
    printf("%s",str);
    return (0);
}*/
