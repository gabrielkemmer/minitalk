/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:37:07 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:36:22 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
void	freeList(t_list *head)
{
    t_list  *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        tmp->content = NULL;
        free(tmp);
    }
}

int	main(void)
{
    t_list *head;
    t_list *second;
    t_list *third;
	int	a;
	int	b;
	int	c;

    a = 4;
    b = 5;
    c = 6;
    head = ft_lstnew((void *)&a);
    second = ft_lstnew((void *)&b);
    third = ft_lstnew((void *)&c);
    head->next = second;
    ft_lstadd_front(&head, third);
    while (third)
    {
        printf("%d", *(int *)third->content);
        third = third->next;
    }
    freeList(third);
}
*/