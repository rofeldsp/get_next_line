/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:04:27 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/09/11 22:11:33 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				a;
	unsigned char	*str1;
	unsigned char	*str2;

	a = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while ((str1[a] == str2[a]) && str1[a] != '\0' && str2[a] != '\0')
		a++;
	if (str1[a] == str2[a] && str1[a] == '\0')
		return (0);
	else
		return (str1[a] - str2[a]);
}
