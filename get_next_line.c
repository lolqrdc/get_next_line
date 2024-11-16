/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/16 15:20:33 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	stocker [BUFFER_SIZE + 1] = {0};
	char		*newline;
	int			toread;

	toread = 1;
	newline = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_gnlchr(stocker))
	{
		ft_gnlclean(stocker);
		newline = ft_gnljoin(newline, stocker);
	}
	while (toread > 0 && ft_gnlchr(stocker) == 0)
	{
		toread = read(fd, stocker, BUFFER_SIZE);
		if (toread < 0)
			return (free(newline), NULL);
		if (toread == 0)
		{
			if (newline != NULL && newline['\0'])
				return (newline);
			return (free(newline), NULL);
		}
		stocker[toread] = '\0';
		newline = ft_gnljoin(newline, stocker);
	}
	return (newline);
}
/*int main(void)
{
	int	fd;
	char *newline;

	fd = open("test03.txt", O_RDONLY);
	newline = get_next_line(fd);
	printf("%s", newline);
	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
}*/
//test 01 - fichier sans newline 
//test 02 - fichier avec une newline 
//test 03 - tres longue ligne sans newline 
//test 04 - tres longue ligne avec newline 
//test 05 - fichier vide 
//test 06 - plusieurs lignes sans newline 
//test 07 - plusieurs lignes avec newline 
//test 08 - 
//test 09 - 
//test 10 - 
//test 11 - 

/* 
16/11 TODO : actuellement quand le buffer est petit, gnl ne marche pas.
*/