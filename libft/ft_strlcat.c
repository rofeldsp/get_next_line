/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:57:58 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:11:57 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t			a;
	size_t			i;
	unsigned int	lendest;
	unsigned int	lensrc;
	char			*s;

	i = 0;
	a = 0;
	s = (char*)src;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(s);
	if (n <= lendest)
		return (lensrc + n);
	while (dest[i])
		i++;
	while (s[a] && i < (n - 1))
	{
		dest[i] = s[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}
