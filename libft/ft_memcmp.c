/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:47:34 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:26:27 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
 #include <string.h>
 #include <stdio.h>
 int main(void)
 {
     size_t size1, size2;
     char s1[] = "string";
     char s2[] = "strin";
    
     size1 = memcmp(s1,s2,4);
     printf("%ld", size1);
     printf("--------- FUNÇÃO ORIGINAL ------------");
     if (size1 == 0)
         printf("String A é igual a B %ld. \n", size1);
     else if (size1 > 0)
         printf("String B é menor que a A %ld.  \n", size1);
     else
         printf("String A é menor que a B %ld.  \n", size1);

     size2 = ft_memcmp(s1,s2,4);
     printf("--------- FUNÇÃO CRIADA ------------");
     if (size2 == 0)
         printf("String A é igual a B %ld. \n", size2);
     else if (size2 > 0)
         printf("String B é menor que a A %ld.  \n", size2);
     else
         printf("String A é menor que a B %ld.  \n", size2);
     return 0;
 }*/
