/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:18:41 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/17 12:59:25 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*cut1(int j, int n, int c)
{
	char	*dst;
	int		b;

	b = n;
	while (b / 10 > 0)
	{
		j++;
		b = b / 10;
	}
	dst = (char*)malloc(sizeof(char) * (j + 1));
	if (dst == NULL)
		return (NULL);
	dst[j] = '\0';
	j--;
	while (n / 10 > 0)
	{
		dst[j] = '0' + n % 10;
		n = n / 10;
		j--;
	}
	dst[j] = '0' + n % 10;
	if (c < 0)
		dst[j - 1] = '-';
	return (dst);
}

char			*ft_itoa(int n)
{
	int		j;
	char	*dst;
	int		c;

	j = 1;
	c = n;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = -n;
		j++;
	}
	dst = cut1(j, n, c);
	return (dst);
}
