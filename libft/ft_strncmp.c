/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:53:12 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/19 22:47:51 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] && s2[i]) && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* #include <stdio.h>
 #include <string.h>
 int main () {
     char s1[] = "PALMEIRAS NÃO TEM MUNDIAL";
     char s2[] = "PALMEIRAS NÃO TEM MUNDIA  ";
     int res1;
     res1 = ft_strncmp(s1, s2, 26);
     printf("Este é o resultado da função criada por mim %d\n", res1);
     if(res1 < 0) {
         printf("str1 é menor que str2\n");
     } else if(res1 > 0) {
         printf("str1 é maior que str2\n");
     } else {
         printf("str1 é igual str2\n");
     }
     res1 = strncmp(s1, s2, 26);
     printf("Este é o resultado da função original %d\n", res1);
     if(res1 < 0) {
         printf("str1 é menor que str2");
     } else if(res1 > 0) {
         printf("str1 é maior que str2\n");
     } else {
         printf("str1 é igual a str2");
     }
     return(0);
 }*/
