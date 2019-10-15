/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofeldsp <rofeldsp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:15:58 by rofeldsp          #+#    #+#             */
/*   Updated: 2019/10/13 21:34:07 by rofeldsp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# define BUFF_SIZE 4096

# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
