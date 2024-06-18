/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 15:20:51 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 00:09:06 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: concatenate two strings into a new string (with malloc)
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a new string, which is the
**	result of the concatenation of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	newstr = ft_newstr(s1_len + s2_len);
	if (!newstr)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		*(newstr + i) = *(s1 + i);
	j = -1;
	while (++j < s2_len)
		*(newstr + i++) = *(s2 + j);
	return (newstr);
}

/*int main(void)
{
	printf("%s\n", ft_strjoin("jKjell ","Renken"));
}*/