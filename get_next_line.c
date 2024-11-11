/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/11 14:22:45 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	stock[BUFFER_SIZE + 1];
	char		*newline;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (ft_gnlchr(fd, stock))
	{
		
	}
	
/* 1. chercher '/n' dans stock*/
/* 2. si '/n' trouve : 
	cpy les caracteres present + '/n';
	ajouter la cpy a newline;*/
/* 3. si '/n' n'est pas trouve : 
	boucler || fin de fd || cas d'erreur  
	return null*/
/*4. supprimer de stock ce qui a ete read() et ajouter a newline*/
/*5. free stock*/
/*6. return un ptr sur newline*/
}
void	free_gnl()
{
}