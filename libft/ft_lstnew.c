/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:12:00 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:31:38 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	if (content == 0)
	{
		tmp->content = malloc(sizeof(content_size));
		tmp->content = NULL;
		tmp->content_size = 0;
		free(tmp->content);
	}
	else
	{
		tmp->content = malloc(sizeof(content_size));
		if (tmp->content == NULL)
			return (NULL);
		tmp->content = ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
