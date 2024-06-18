/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:38:57 by krenken           #+#    #+#             */
/*   Updated: 2024/06/17 22:55:00 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SYNOPSIS: write zeroes to a byte string
**
** DESCRIPTION:
** 		The bzero() function writes n zeroed bytes to the string s. If n is
**	zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len--)
		*str++ = 0;
}
