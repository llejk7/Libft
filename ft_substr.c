/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:57:01 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 17:22:36 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!*s)
		return (NULL);
	substr = ft_newstr(len);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
		*(substr + i++) = *(s + start++);
	return (substr);
}

/*int main(void)
{
	printf("%s", ft_substr("Kjell", 2, 2));
}*/