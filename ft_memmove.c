/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:15:13 by krenken           #+#    #+#             */
/*   Updated: 2024/06/11 17:59:53 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memmove()	- is used to copy a block of memory from a location to another;
 *	 			  other then ft_memcpy the data is stored in a buffer to 
 				  avoid loses for overlaping memory
 * *to			- A pointer to the memory location where
 				  the copied data will be stored
 * *from		- pointer to the memory location from where 
 				  the data is to be copied
 * size_t len	- The number of bytes to be copied
*/

void	*ft_memmove(void *to, const void *from, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = (unsigned char *)to;
	src = (unsigned char *)from;
	if (!to && !from)
		return (to);
	if (from < to)
		while (len--)
			dest[len] = src[len];
	else
		while (len--)
			*dest++ = *src++;
	return (to);
}
