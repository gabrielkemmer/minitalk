/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:24 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 08:25:27 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
//ele pega a primeira ocorrencia da letra que eu pesquisa, 
//o strrchr pega a ultima ocorrencia da pesquisa. Gibriel em 
//strchr imprime ibriel. No strrchr imprime 
//iel.*/
/*
int	main(void)
{
	char	nome[20];
	char	letra;

    nome[20] = "Gabriel";
    letra = 'i';
    printf("%s\n", strchr(nome, letra));
    printf("%s\n", ft_strchr(nome, letra));
}
*/
