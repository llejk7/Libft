/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:30:43 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 00:06:03 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memset()	- function writes n bytes of value c (converted to an
**				  unsigned char) to the string s.
** *s 			- starting address of memory to be filled
** int c		- Value to be filled - but it is converted to an unsigned char
** size_t len	- Number of bytes to be filled starting from *s to be filled
*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len --)
		*str++ = (unsigned char)c;
	return (s);
}
