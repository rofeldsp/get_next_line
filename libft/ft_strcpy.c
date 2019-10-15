/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:48:30 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/11 20:26:48 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	int		a;
	char	*s;

	a = 0;
	s = (char*)src;
	i = ft_strlen(s);
	while (a < i)
	{
		*(dest + a) = *(s + a);
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
