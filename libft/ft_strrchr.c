/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:04:54 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:22:33 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				i;
	int				a;

	i = 0;
	str = (char*)s;
	a = ft_strlen(str);
	if (c == 0)
		return ((char*)(s + a));
	while ((a - i) >= 0)
	{
		if (str[a - i] == (char)c)
			return ((char*)(s + a - i));
		i++;
	}
	return (NULL);
}
