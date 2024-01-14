/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:24 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/15 20:47:12 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (str1[i] && str1[i] == str2[i])
		{
			while (str1[i] && str1[i] == str2[i] && i < n)
				i++;
		}
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	nome[];
	char	nome2[];
	int		tamanho;

    nome[] = "test\200";
    nome2[] = "test\0";
    tamanho = 6;
    printf("%d\n", strncmp(nome, nome2, tamanho));
    printf("%d\n", ft_strncmp(nome, nome2, tamanho));
}
*/
