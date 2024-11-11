/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:24 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/11 14:28:35 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_gnlchr(int fd, char *stock)
{
	int	i;

	if (!stock)
		return (NULL);
	while (read(fd, stock, BUFFER_SIZE) > 0)
	{
		i = 0;
		while (stock[i])
		{
			if (stock[i] == '\n')
				return (&stock[i]);
			i++;
		}
	}
	return (NULL);
}
char	ft_gnlcpy(char *stock)
{
	
}
void	ft_gnlclean()
{}
char	*ft_gnljoin()
{}