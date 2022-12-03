/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:52:43 by vchastin          #+#    #+#             */
/*   Updated: 2022/06/21 00:12:01 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dest = ft_strlen(destination);
	len_src = ft_strlen(source);
	if (dstsize <= len_dest)
		return (dstsize + len_src);
	while (source[i] && len_dest + i < dstsize - 1)
	{
		destination[len_dest + i] = source[i];
		i++;
	}
	destination[len_dest + i] = '\0';
	return (len_dest + len_src);
}
