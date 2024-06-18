/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:17:02 by krenken           #+#    #+#             */
/*   Updated: 2024/06/17 23:33:30 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare byte string
**
** DESCRIPTION:
** 		The memcmp() function compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (size_t)i <= n)
		i++;
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	printf("%d\n", memcmp("Kjell", "Kai", 5));
	printf("%d\n", ft_memcmp("Kjell", "Kai", 5));
}*/