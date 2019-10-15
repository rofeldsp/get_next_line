/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:21:50 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/17 16:37:53 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;
	int		i;

	i = 0;
	res = (void*)malloc(size);
	if (res == NULL)
		return (NULL);
	ft_memset(res, '\0', size);
	return ((void*)res);
}
