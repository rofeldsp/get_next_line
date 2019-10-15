/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:24:33 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:16:33 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t			a;
	size_t			i;
	char			*st;

	i = 0;
	a = 0;
	st = (char*)s2;
	while (s1[i] != '\0')
		i++;
	while (st[a] != '\0' && a < n)
	{
		s1[i] = st[a];
		i++;
		a++;
	}
	s1[i] = '\0';
	return (s1);
}
