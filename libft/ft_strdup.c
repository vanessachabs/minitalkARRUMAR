/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:45:03 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/19 22:38:26 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s);
	ptr = (malloc(sizeof(char) * size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, size);
	ptr[size] = '\0';
	return (ptr);
}
/* #include <stdio.h>
#include <string.h>
int main (void) {
    char str[5] = "AFABA";
    char *s_or, *s_creat;
    int len_orig, len_creat;

    s_or = strdup(str);
    len_orig = strlen(s_or);
    printf("A função original retorna: %s e %d",s_or, len_orig);

    s_creat = ft_strdup(str);
    len_creat = ft_strlen(s_creat);
    printf("A função criada retorna: %s e %d",s_creat, len_creat);
    return(0);
} */
