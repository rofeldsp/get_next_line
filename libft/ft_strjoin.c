/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <rofeldsp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:51:25 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/10/11 13:45:59 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	char			*dst;
	size_t			j;
	size_t			len1;
	size_t			len2;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (dst == NULL)
		return (NULL);
	while (i < (len1 + len2))
	{
		if (i < len1)
			dst[i] = s1[i];
		else
			dst[i] = s2[j++];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
