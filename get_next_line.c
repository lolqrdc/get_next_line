/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/23 12:16:08 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	stocker [BUFFER_SIZE + 1] = {};
	char		*newline;
	int			to_read;

	newline = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_gnlchr(stocker))
		(ft_gnlclean(stocker), newline = ft_gnljoin(newline, stocker));
	to_read = 1;
	while (to_read > 0 && ft_gnlchr(stocker) == 0)
	{
		to_read = read(fd, stocker, BUFFER_SIZE);
		if (to_read < 0)
			return (free(newline), NULL);
		if (to_read == 0)
		{
			if (newline != NULL && newline[0] != '\0')
				return (newline);
			return (free(newline), NULL);
		}
		stocker[to_read] = '\0';
		newline = ft_gnljoin(newline, stocker);
	}
	return (newline);
}
/*int main(void)
{
	int	fd;
	char *newline;

	fd = open("test01.txt", O_RDONLY);
	while ((newline = get_next_line(fd)) != NULL)
	{
		printf("%s", newline);
		free(newline);
	}
	close (fd);
	return (0);
}*/
//test 01 - fichier sans newline 
//test 02 - fichier avec une newline 
//test 03 - tres longue ligne sans newline 
//test 04 - tres longue ligne avec newline 
//test 05 - fichier vide 
//test 06 - plusieurs lignes sans newline 
//test 07 - plusieurs lignes avec newline 
//test 08 - test specifique a la condition if line 34