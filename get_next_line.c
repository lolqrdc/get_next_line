/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/12 16:56:38 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stocker [BUFFER_SIZE + 1];
	char		*newline;
	int			toread;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	return (newline);
}
/* 
1- ce qui est reference par fd, stock dans un static char nommee 'stocker'
2- 
*/