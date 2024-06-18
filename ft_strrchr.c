/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:18:33 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 00:16:43 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (last occurence)
**
** DESCRIPTION:
** 		The strrchr() function locates the last occurrence of c (converted to a
**	char) in the string s.  If c is `\0', strrchr() locates the terminating
**	`\0'.
*/

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen((char *)str);
	while (i--)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
	}
	return (0);
}

/*int main(void)
{
	printf("%s\n", strrchr("kjellrenkenllejk", 'r'));
	printf("%s\n", ft_strrchr("kjellrenkenllejk", 'r'));
}*/