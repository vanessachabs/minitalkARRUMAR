/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:20:49 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 21:14:31 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, '\0', nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>
int main ()
{
    int *ptr;
    int n;
    int i;
    
    n = 5;
    i = 0;
    ptr = ft_calloc(n,4);
    if (ptr == 0)
        printf("Memória não alocada\n");
    else
    {
        printf("Memória alocada\n");
        printf("Os elementos alocados: \n");
        while(i < n)
        {
            printf("%d\n", ptr[i] = i + 1);
            i++;
        }
    }
}*/
