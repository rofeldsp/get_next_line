/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:15:08 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/18 21:43:01 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cut1(char const *s, char c)
{
	int a;
	int i;

	i = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			a++;
		}
	}
	return (a);
}

static int	cut2(char const *s, char c, char **dst, int a)
{
	int j;
	int i;

	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				j++;
			}
			dst[a] = (char*)malloc(sizeof(char) * (j + 1));
			a++;
		}
	}
	return (a);
}

static char	*cut3(int *i, char const *s, char c, char *dst)
{
	int a;

	a = 0;
	while (s[*i] == c && s[*i] != '\0')
		*i = *i + 1;
	while (s[*i] != c && s[*i] != '\0')
	{
		dst[a] = s[*i];
		a++;
		*i = *i + 1;
	}
	dst[a] = '\0';
	return (dst);
}

static int	cut4(int i, int t, char **dst)
{
	while (i < t)
	{
		if (dst[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(dst[i]);
				i--;
			}
			free(dst);
			return (1);
		}
		i++;
	}
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	int		l;
	char	**dst;
	int		i;
	int		j;
	int		t;

	if (s == NULL)
		return (NULL);
	l = cut1(s, c);
	if (!(dst = (char**)malloc(sizeof(char*) * (l + 1))))
		return (NULL);
	i = 0;
	j = 0;
	t = cut2(s, c, dst, i);
	if (cut4(i, l, dst) == 1)
		return (NULL);
	while (j < l && s[i] != '\0')
	{
		dst[j] = cut3(&i, s, c, dst[j]);
		j++;
	}
	dst[j] = NULL;
	return (dst);
}
