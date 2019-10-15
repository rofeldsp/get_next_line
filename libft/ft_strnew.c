/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:17:57 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/15 13:52:04 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*res;
	size_t		i;

	i = 0;
	res = (char*)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	while (i <= size + 1)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
