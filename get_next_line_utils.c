/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:24 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/13 16:12:52 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
char	*ft_gnljoin(char *newline, char *stocker)
{
	char	*result;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	if (!newline || !stocker)
		return (NULL);
	result = malloc(ft_strlen(newline + ft_strlen(stocker) + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
	while(stocker[i] || stocker[i] != '\n')
	{
		result[i] = stocker[i];
		i++;
	}
	while (newline[j] || newline[j] != '\n')
	{
		result[i + j] = newline[j];
		j++;
	}
	free(stocker);
	result[i + j] = '\0';
	return(result);
}
char	*ft_gnlclean(char *stocker)
{
	int	i;
	int	j;
	char	*newstocker;

	i = 0;
	j = 0;
	while (stocker[i] && stocker[i] != '\n')
		i++;
	if (stocker[i] == '\n')
		i++;
	newstocker = malloc(ft_strlen(stocker + 1) * sizeof(char));
	if (!newstocker)
		return (NULL);
	while (stocker[i])
		newstocker[j++] = stocker[i++];
	newstocker[j] = '\0';
	free(stocker);
	return (newstocker);
}
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0' || *str != '\n')
		i++;
	return (i);
}