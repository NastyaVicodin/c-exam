/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 21:30:52 by alukyane          #+#    #+#             */
/*   Updated: 2017/10/23 21:30:54 by alukyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		cmp(int a, int b)
{
	if (a <= b)
		return (1);
	return (0);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*head;
	int		i;
	int		swap;

	i = 1;
	head = lst;
	while (i && lst)
	{
		i = 0;
		while (lst->next)
		{
			if ((*cmp)(lst->data, lst->next->data) == 0)
			{
				i++;
				swap = lst->data;
				lst->data = lst->next->data;
				lst->next->data = swap;
			}
			lst = lst->next;
		}
		lst = head;
	}
	return (head);
}

int		main(void)
{
	t_list *lst;
	t_list *head;
	int i;

	i = 0;
	lst = (t_list *)malloc(sizeof(t_list));
	head = lst;
	while (i < 8)
	{
		lst->next = (t_list *)malloc(sizeof(t_list));
		lst = lst->next;
		i++;
	}
	lst->next = NULL;
	lst = head;
	while (lst->next)
	{
		lst->data = 5;
		lst = lst->next;
		i--;
	}
	lst->data = 3;
	lst = head;
	while(lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
	lst = head;
	sort_list(lst, (*cmp));
	lst = head;
	while(lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
	return (0);
}