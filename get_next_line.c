/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <rofeldsp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:33:37 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/10/13 21:31:22 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		check_remains(char **str, int *mem, char **line, int i)
{
	if (*str != NULL)
	{
		while (*(*str + i))
		{
			if (*(*str + i) == '\n')
			{
				*(*str + i) = '\0';
				if (!(*line = ft_strdup(*str)))
					return (-1);
				*str = ft_strcpy(*str, *str + i + 1);
				return (1);
			}
			i++;
		}
		*mem = BUFF_SIZE + ft_strlen(*str);
	}
	else
	{
		*line = NULL;
		*str = ft_strnew(*mem + 1);
	}
	return (0);
}

int		check_if_readable(char **line, int ret, char **str)
{
	if (ret == 0 && *line != NULL && **str != '\0')
	{
		if (!(*line = ft_strdup(*str)))
			return (-1);
		ft_strdel(str);
		return (1);
	}
	else if (ret == 0 && **str == '\0')
	{
		ft_strdel(str);
		return (0);
	}
	else if (ret < 0)
	{
		ft_strdel(str);
		return (-1);
	}
	return (10);
}

int		check_if_line_ends(int i, int mem, char **str, char **line)
{
	while (i < mem)
	{
		if (*(*str + i) == '\n')
		{
			*(*str + i) = '\0';
			if (!(*line = ft_strdup(*str)))
				return (-1);
			if (*(*str + i + 1) != '\0')
				*str = ft_strcpy(*str, *str + i + 1);
			else
				ft_strdel(str);
			return (-1);
		}
		if (*(*str + i) == '\0')
		{
			if (!(*line = ft_strdup(*str)))
				return (-1);
			ft_strdel(str);
			return (-1);
		}
		i++;
	}
	return (i);
}

int		copy_buffer(char **str, char *buff)
{
	char	*tmp;

	if (!(tmp = ft_strdup(*str)))
		return (-1);
	free(*str);
	if (!(*str = ft_strjoin(tmp, buff)))
		return (-1);
	ft_bzero(buff, BUFF_SIZE + 1);
	free(tmp);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char		*str[10241];
	int				ret;
	char			buff[BUFF_SIZE + 1];
	int				i;
	int				mem;

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0 || fd > OPEN_MAX)
		return (-1);
	mem = BUFF_SIZE;
	i = 0;
	if ((ret = (check_remains(&str[fd], &mem, line, i))) != 0)
		return (ret);
	ft_bzero(buff, BUFF_SIZE + 1);
	while (1)
	{
		if ((ret = read(fd, buff, BUFF_SIZE)) > 0)
			buff[BUFF_SIZE] = '\0';
		if ((ret = check_if_readable(line, ret, &str[fd])) != 10)
			return (ret);
		if ((copy_buffer(&str[fd], buff)) == -1)
			return (-1);
		if ((i = check_if_line_ends(i, mem, &str[fd], line)) < 0)
			return ((*line == NULL) ? i : -i);
		mem = mem + BUFF_SIZE;
	}
}
