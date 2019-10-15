/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:25:39 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:25:48 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	short1(char const *s, int l)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		l--;
		i++;
	}
	return (l);
}

static int	short2(char const *s)
{
	int l;

	l = ft_strlen(s) - 1;
	while (s[l] == ' ' || s[l] == '\t' || s[l] == '\n')
		l--;
	l++;
	return (l);
}

char		*ft_strtrim(char const *s)
{
	char	*dst;
	int		i;
	int		l;
	int		a;

	if (s == NULL)
		return (NULL);
	l = short2(s);
	a = l - short1(s, l);
	l -= a;
	if (l <= 0)
		l = 0;
	dst = (char*)malloc(sizeof(char) * (l + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		dst[i] = s[a + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
