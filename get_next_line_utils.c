/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:24 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/12 18:08:27 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* fonction pour chercher un '\n' dans le buffer */
int	ft_gnlchr(char *stocker)
{
	int	i;

	i = 0;
	if (stocker == NULL)
		return (0);
	while (stocker[i] != '\0')
	{
		if (stocker[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
/* fonction pour joindre ce qui est dans le buffer a la newline*/
char	*ft_gnljoin(char *newline, char *stocker)
{
	char	*result;
	size_t	i;
	size_t	j;
	
	result = malloc(ft_strlen(newline) + ft_strlen(stocker) + 1) *sizeof(char);
	
}
/* fonction pour clean le buffer apres l'ajout d'une ligne dans newline*/
char	*ft_gnlclean(char *stocker, char *newline)
{
	size_t	i;
	size_t	j;
	
	
}
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0' || *str != '\n')
		i++;
	return (i);
}