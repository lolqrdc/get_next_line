/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loribeir <loribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/11 11:01:36 by loribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	stock[BUFFER_SIZE + 1];
	char		*newline;
	size_t		toread;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	while (read(fd, stock, sizeof(BUFFER_SIZE) != '/n'))
	{
		
	}
	
}
void	free_gnl()
{
}
/*
1 - 
1 chercher le premier '/n' dans fd
2 stocker les caracteres avant '/n' dans un buffer (stock)
	-> if '/n' est trouve {  
		> extraire tous les caracteres avec '/n' dans une nouvelle ligne (newline)
		> allouer de la memoire pour la nouvelle ligne
	-> while '/n' n'est pas trouve 
		> continuer a read()
	-> if cas d'erreur ou fin de fd
		return null }
3 supprimer les caracteres extraits de stock
4 se placer [/n + 1] dans stock et boucler si gnl est appele a nouveau
5 si c'est la fin de fd, liberer stock
6 retourner un pointeur sur la nouvelle ligne allouee
*/