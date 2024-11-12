/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/12 17:41:07 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stocker [BUFFER_SIZE + 1] = {0};
	char		*newline;
	int			toread;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	return (newline);
}
/* 
1. ce qui est reference par fd, stock dans un static char nommee 'stocker'
2. avec une fonction gnlchr, chercher le '/n' dans stocker.
	-> si '/n' est trouve, avec une fonction gnlcpy copier du point start au '\n' inclu dans 'newline'.
	-> si '/n' n'est pas trouve, avec gnlcpy copier BUFFER_SIZE de stocker dans newline puis reboucler. 
		-> quand apres [x] appel de la fonction, '/n' a ete trouve 
			-> avec une fonction gnljoin, rajouter ce qui a deja ete ajoute a newline avec stocker. 
avec une fonction gnlclean, supprimer ce qui vient d'etre ajouter a newline. 
3. free 
*/