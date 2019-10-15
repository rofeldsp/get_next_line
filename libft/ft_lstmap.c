/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:15:40 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:50:02 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*out;
	t_list	*out1;

	if (!(out = malloc(sizeof(lst))))
		return (NULL);
	out = f(lst);
	out1 = out;
	while (lst->next != NULL)
	{
		if (!(out->next = malloc(sizeof(lst->next))))
			return (NULL);
		out->next = f(lst->next);
		out = out->next;
		lst = lst->next;
	}
	return (out1);
}
