/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:19:28 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 05:29:19 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc(sizeof(char) * (s_len + 1));
	if (!str)
		return (NULL);
	while (i < s_len)
	{
		str[i] = f(i, ((char *)s)[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
char f(unsigned int i, char ch)
{
    printf("%d - %c\n", i, ch+i);
    return (ch + i);
}
int main(void)
{
	char s1[] = "abcdfegh";
	char *s2;
	
	s2 = ft_strmapi(s1, *f);
	printf("%s\n", s2);
	
	return (0);
 }*/
