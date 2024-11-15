/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/15 19:53:23 by loribeir         ###   ########.fr       */
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
		newline = ft_gnljoin(newline, stocker);
		ft_gnlclean(stocker);
	}
	while (toread > 0)
	{
		toread = read(fd, stocker, BUFFER_SIZE);
		if (toread < 0)
			return (free(newline), NULL);
		if (toread == 0)
			return (newline);
		stocker[toread] = '\0';
		newline = ft_gnljoin(newline, stocker);
	}
	return (newline);
}
/*int main(void)
{
	int	fd;
	char *newline;

test 01 : fichier sans newline 
	fd = open("test01.txt", O_RDONLY);
	newline = get_next_line(fd);
	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 02 - fichier avec une newline 
	newline = get_next_line(fd);
	fd = open("test02.txt", O_RDONLY);
	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 03 - tres longue ligne sans newline 
	newline = get_next_line(fd);
	fd = open("test03.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 04 - tres longue ligne avec newline 
	newline = get_next_line(fd);
	fd = open("test04.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 05 - fichier vide 
	newline = get_next_line(fd);
	fd = open("test05.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 06 - plusieurs lignes sans newline 
	newline = get_next_line(fd);
	fd = open("test06.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 07 - plusieurs lignes avec newline 
	newline = get_next_line(fd);
	fd = open("test07.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
test 08 - 
	newline = get_next_line(fd);
	fd = open("test08.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);

	newline = get_next_line(fd);
	fd = open("test09.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);	result[i] = '\0'; 

	}
	free(newline);
	close (fd);
	newline = get_next_line(fd);
	fd = open("test10.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
	newline = get_next_line(fd);
	fd = open("test11.txt", O_RDONLY);

	while(newline != NULL)
	{
		newline = get_next_line(fd);
		printf("%s", newline);
	}
	free(newline);
	close (fd);
}*/