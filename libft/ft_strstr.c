/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:22:02 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:24:10 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char			*str;
	char			*s;
	int				i;
	int				a;

	i = 0;
	a = 0;
	str = (char*)haystack;
	s = (char*)needle;
	if (s[a] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == s[a])
			if (ft_strncmp(&str[i], s, ft_strlen(s)) == 0)
				return (&str[i]);
		i++;
	}
	return (NULL);
}
