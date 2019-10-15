/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:29:55 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:20:45 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t			i;
	size_t			a;

	a = 0;
	i = ft_strlen(src);
	while (a < i && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		if (i < n)
			dest[a] = '\0';
		else
			dest[a] = src[a];
		a++;
	}
	return (dest);
}
