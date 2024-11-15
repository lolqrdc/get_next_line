/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:24 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/15 19:37:51 by loribeir         ###   ########.fr       */
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

char	*ft_gnljoin(char *st, char *nl)
{
	char		*result;
	size_t		i;
	size_t		j;

	if (!st)
	{
		st = malloc(sizeof(char));
		if (!nl)
			return (free(st), NULL);
		st[0] = '\0';
	}
	result = malloc((ft_strlen(st) + ft_strlen(nl) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	while (st[++i] != '\0')
		result[i] = st[i];
	free(st);
	j = 0;
	while (nl[j] && nl[j] != '\n')
		result[i++] = nl[j++];
	result[i++] = '\n';
	result[i] = '\0';
	return (result);
}

char	*ft_gnlclean(char *stocker)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stocker[i] && stocker[i] != '\n')
		i++;
	if (stocker[i] == '\n')
		i++;
	while (stocker[i])
	{
		stocker[j] = stocker[i];
		i++;
		j++;
	}
	stocker[j] = '\0';
	return (stocker);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i);
}
