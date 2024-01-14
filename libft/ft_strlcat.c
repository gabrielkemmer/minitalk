/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:16:23 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/16 10:57:42 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	j;
	size_t	leng_src;
	size_t	leng_dest;

	if (size == 0)
		return (ft_strlen(src));
	leng_src = ft_strlen(src);
	leng_dest = ft_strlen(dst);
	j = leng_dest;
	cont = 0;
	if (size < leng_dest)
		return (leng_src + size);
	while (src[cont] != '\0' && j < (size - 1))
	{
		dst[j] = src[cont];
		j++;
		cont++;
	}
	dst[j] = '\0';
	return (leng_dest + leng_src);
}
/*
int	main(void)
{
	char	dest[];
	char	src[];
	int		number;

	dest[] = "";
	src[] = "lorem ipsum dolor sit amet";
	number = 5;
	
	ft_strlcat(dest, src, number);
	printf("%s", dest); 
	//printf("%s", strlcat(dest, src, number));
}
*/
