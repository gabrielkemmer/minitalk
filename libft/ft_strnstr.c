/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:37:37 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/15 19:46:02 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	position;

	if (*little == '\0')
		return ((char *)big);
	position = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= position)
	{
		if (*big == *little && ft_memcmp(big, little, position) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[20];
	char	str2[10];
	int		size;

	str[20] = "42 born to code";
	str2[10] = "42";
    size = 5;
	printf("%s", ft_strnstr(str, str2, size));
	printf("\n\n");
}
*/