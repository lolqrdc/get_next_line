/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:42:18 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/16 20:51:51 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line_bonus(int fd)
{
	static char	stocker [FD_SIZE][BUFFER_SIZE + 1] = {0};
	char		*newline;
	int			to_read;

	newline = NULL;
	if (fd < 0 || fd >= FD_SIZE || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_gnlchr(stocker[fd]))
		(ft_gnlclean(stocker[fd]), newline = ft_gnljoin(newline, stocker[fd]));
	to_read = 1;
	while (to_read > 0 && ft_gnlchr(stocker[fd]) == 0)
	{
		to_read = read(fd, stocker[fd], BUFFER_SIZE);
		if (to_read < 0)
			return (free(newline), NULL);
		if (to_read == 0)
		{
			if (newline != NULL && newline[0] != '\0')
				return (newline);
			return (free(newline), NULL);
		}
		stocker[fd][to_read] = '\0';
		newline = ft_gnljoin(newline, stocker[fd]);
	}
	return (newline);
}
int main (void)
{
	 int i = 0;
	 int fd1 = open("test_b01.txt", O_RDONLY);
	 int fd2 = open("test_b02.txt", O_RDONLY);
	 char line_1;
	 char line_2;
	
	 while (i < 5)
	 {
		line_1 = get_next_line_bonus(fd1);
		line_2 = get_next_line_bonus(fd2);
		i++;
		
		printf("test_b01: %s", line_1);
		printf("test_b02: %s", line_2);
		
		free(line_1);
		free(line_2);
	 }
	 close(fd1);
	 close(fd2);
	 return (0);
}