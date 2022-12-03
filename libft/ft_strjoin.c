/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:49:59 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/20 04:46:54 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l_s1;
	size_t	l_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	str = (malloc(sizeof(char) * (l_s1 + l_s2 + 1)));
	if (str == NULL)
		return (0);
	ft_strlcpy(str, (char *)s1, l_s1 + 1);
	ft_strlcpy(&str[l_s1], (char *)s2, l_s2 + 1);
	return (str);
}
/* #include <stdio.h>
int main(void)
{
    char s1[] = "amiga";
    char s2[] = "inimiga";
    char *r;

    r = ft_strjoin(s1,s2);
    printf("%s",r);
    return (0);
}*/
