/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:43:08 by loribeir          #+#    #+#             */
/*   Updated: 2024/11/10 21:19:03 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
/*
1. static variable to stock.
2. check if fd & buffer size are valid
3. while stock do not have '/n' 
	-> read buffer size from fd
	-> add characters to stock 
	-> if error, return null

4. find first '/n' in stock
	-> if found 
		> extract all characters with '/n' to a new string
		> remove extracted characters from stock
	-> if not found 
		> extract all the stock as a new string
5. allocate memory for the extracted string
6. copy the extracted string to the new string
7. clean the stock by removing the extracted string
8. if its the end of fd, free the stock
9. return a pointer to the new string allocated
*/
}
