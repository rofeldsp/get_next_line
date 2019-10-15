/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:30:36 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:27:05 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*a;
	char			*b;

	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	a = (char*)dst;
	b = (char*)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
