/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/10 17:23:44 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*list;
	char			*line;
	int				count;
	
	*list = NULL;
	
	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
}
void	*read_and_fill()
{
}
void	*fill_line()
{
}
