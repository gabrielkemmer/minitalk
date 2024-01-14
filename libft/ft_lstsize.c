/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:19:20 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/26 10:19:23 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
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
    //ft_lstadd_front(&first, third);
    while (third)
    {
        printf("%d", *(int *)third->content);
        third = third->next;
    }
    ft_lstsize(first);
}
*/