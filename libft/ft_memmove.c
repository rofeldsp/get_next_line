/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 23:41:09 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:27:47 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	if (dst <= src)
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	else if (dst > src)
		while (i < len)
		{
			d[len - 1 - i] = s[len - 1 - i];
			i++;
		}
	return (dst);
}
