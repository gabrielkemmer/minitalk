/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:05:40 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/26 11:05:42 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
    t_list *first;
    t_list *second;
    t_list *third;
	int	a;
	int	b;
	int	c;

    a = 1;
    b = 2;
    c = 3;
    first = ft_lstnew((void *)&a);
    second = ft_lstnew((void *)&b);
    third = ft_lstnew((void *)&c);
    first->next = second;
    ft_lstlast(first);
    while (third)
    {
        printf("%d", *(int *)third->content);
        third = third->next;
    }
}
*/