/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:47:25 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/14 21:03:51 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
