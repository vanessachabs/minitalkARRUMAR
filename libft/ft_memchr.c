/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:50:11 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:25:58 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = -1;
	tmp = (unsigned char *)s;
	while (++i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)(&tmp[i]));
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char s[] = "string";
    const char c = 'i';
    char *res, *r;

    res = memchr(s,c,ft_strlen(s));
    printf("--------- FUNÇÃO ORIGINAL ------------");
    printf("A função procura a primeira ocorrencia do %c que é %s \n", c,res);

    r = ft_memchr(s,c,ft_strlen(s));
    printf("--------- FUNÇÃO CRIADA ------------");
    printf("A função procura a primeira ocorrencia do %c que é %s \n", c,r);
    return 0;
}*/
