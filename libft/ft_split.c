/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:23:06 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 06:03:26 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int	i;
	int	mark;
	int	w_count;

	i = 0;
	w_count = 0;
	mark = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			mark = 1;
		}
		else if (mark)
		{
			w_count++;
			if (s[i] != c)
				mark = 0;
		}
		i++;
	}
	return (w_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ft_strlen(s))
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] && s[i + j] != c)
				j++;
			array[k++] = ft_substr(s, i, j);
		}
		i += j + 1;
	}
	array[k] = NULL;
	return (array);
}
/* #include <stdio.h>
 int main()
 {   char **ptr;
     int i;
	 ptr = ft_split("  ca rio ! ", ' ');
     i = 0;
     while (i < 4)
     {
         printf("ptr[%d] = %s\n",i,ptr[i]);
         i++;
     }
     return (0);
 }*/
