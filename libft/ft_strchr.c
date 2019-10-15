/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:40:18 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/14 21:03:30 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	int				i;

	i = 0;
	str = (char*)s;
	if (c == 0)
	{
		i = ft_strlen(str);
		return ((char*)(s + i));
	}
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char*)(s + i));
		i++;
	}
	return (NULL);
}
