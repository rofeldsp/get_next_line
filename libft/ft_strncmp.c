/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 21:08:16 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:17:44 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*st1;
	unsigned char	*st2;

	a = 0;
	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while ((st1[a] == st2[a]) && st1[a] != '\0' && st2[a] != '\0' && a < n)
		a++;
	if ((st1[a] == st2[a] && st1[a] == '\0') || a == n)
		return (0);
	else
		return (st1[a] - st2[a]);
}
