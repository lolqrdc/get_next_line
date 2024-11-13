/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/13 21:25:42 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	stocker [BUFFER_SIZE + 1] = {0};
	char		*newline;
	int			toread;

	newline = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1) // lire le fichier jusqu'a trouver '\n' ou fin du fichier
	{
		if (ft_gnlchr(stocker)) // si stocker contient un '\n'
		{
			newline = ft_gnljoin(newline, stocker); // si '\n' est trouve, ajouter le content de stocker a newline
			ft_gnlclean(stocker);
			return (newline);
		}
		toread = read(fd, stocker, BUFFER_SIZE); // add [buffer_size] characters from fd referenced .txt to 'stocker'
		if (toread < 0)
			return (NULL);
		if (toread == 0)
			return (newline);
		stocker[toread] = '\0'; // ajouter un '\0' servant de repere pour joindre stocker et newline
		newline = ft_gnljoin(newline, stocker); // quand meme ajout le content de stocker a newline
	}
	stocker[toread] = '\0';
	return (newline);
}
int main(void)
{
	int	fd;
	char *newline;
	int count;

	count = 0;
	fd = open("fichier.txt", O_RDONLY);
	while (1)
	{
		newline = get_next_line(fd);
		if (newline == NULL)
			break;
		count++;
	printf("[%d]: %s\n", count, newline);
	free(newline);
	newline = NULL;
	}
	close(fd);
	return (0);
}