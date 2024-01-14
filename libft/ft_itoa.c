/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/23 15:36:57 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_nbrlen(int n)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i + neg);
}

static void	ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	int		neg;
	char	*str;

	i = 0;
	neg = (n < 0);
	len = ft_nbrlen(n);
	str = ft_calloc((len + 1), sizeof(*str));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i++] = (char)('0' + ft_abs(n % 10));
		n /= 10;
	}
	if (neg)
		str[i] = '-';
	ft_strrev(str);
	return (str);
}
/*
int	main(void)
{
	int	numero3;

	int	numero = -24561000;	
	int	numero2 =INT_MAX;
	numero3 = INT_MIN;
	printf("First: %s\n",ft_itoa(numero));
	printf("Second: %s\n",ft_itoa(numero2));
	printf("Third: %s",ft_itoa(numero3));
	return	(0);
}
*/
