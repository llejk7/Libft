/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:53:08 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 00:22:27 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare strings (size-bounded)
**
** DESCRIPTION:
** 		The strcmp() and strncmp() functions lexicographically compare the null-
**	terminated strings s1 and s2.
** 		The strncmp() function compares not more than n characters.  Because
**	strncmp() is designed for comparing strings rather than binary data,
**	characters that appear after a `\0' character are not compared.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (size_t)i <= n)
		i++;
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	//equal
	printf("OG: %d\n", strncmp("Moin", "Moin", 5));
	printf("my: %d\n", ft_strncmp("Moin", "Moin", 5));
	//s1 bigger q
	printf("OG: %d\n", strncmp("H", "A", 5));
	printf("my: %d\n", ft_strncmp("H", "A", 5));
	//s1 smaller
	printf("OG: %d\n", strncmp("Moi", "Moin", 5));
	printf("my: %d\n", ft_strncmp("Moi", "Moin", 5));
	
}*/