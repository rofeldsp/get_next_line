/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:36:47 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/20 13:22:04 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char			*str;
	char			*s;
	size_t			i;
	size_t			a;

	i = 0;
	a = 0;
	str = (char*)haystack;
	s = (char*)needle;
	if (s[a] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		if (str[i] == s[a] && (i + ft_strlen(s)) <= len)
			if (ft_strncmp(&str[i], s, ft_strlen(s)) == 0)
				return (&str[i]);
		i++;
	}
	return (NULL);
}
