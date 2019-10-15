/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:23:49 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/18 12:35:41 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_shortcut(char *str, long long int a, long long int i)
{
	long long int	number;
	long long int	dgt;

	dgt = 0;
	number = 0;
	if (*(str + a) >= 48 && *(str + a) <= 57)
	{
		while (*(str + a) >= 48 && *(str + a) <= 57 && a < i)
		{
			dgt = *(str + a) - '0';
			a++;
			if ((number * 10 + dgt) < number)
				return (-1);
			number = (number * 10) + dgt;
		}
		return (number);
	}
	else
		number = 0;
	return (number);
}

static long long int	ft_negativenbr(char *str, long long int a,
		long long int i)
{
	long long int	number;
	long long int	dgt;

	dgt = 0;
	if (*(str + a) == 45)
	{
		if (*(str + (a + 1)) >= 48 && *(str + (a + 1)) <= 57)
		{
			a++;
			if ((ft_shortcut(str, a, i) == -1))
				return (0);
			number = -(ft_shortcut(str, a, i));
			return (number);
		}
		else
			number = 0;
		return (number);
	}
	return (0);
}

static long long int	ft_atoll(const char *str)
{
	long long int	i;
	long long int	a;
	char			*s;

	s = (char*)str;
	a = 0;
	i = ft_strlen(s);
	if (s[a] == 32 || (s[a] >= 9 && s[a] <= 13))
	{
		while (s[a] == 32 || (s[a] >= 9 && s[a] <= 13))
		{
			a++;
		}
	}
	if (*(s + a) == 45)
		return (ft_negativenbr(s, a, i));
	else if (*(s + a) == 43)
	{
		a++;
		return (ft_shortcut(s, a, i));
	}
	else
		return (ft_shortcut(s, a, i));
	return (0);
}

int						ft_atoi(const char *str)
{
	return (ft_atoll(str));
}
