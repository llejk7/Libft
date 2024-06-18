/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:48:23 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 00:08:59 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
*/

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*copy;

	len = ft_strlen((char *)str + 1);
	copy = (char *)malloc(len);
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, str);
	return (copy);
}

/*int main(void)
{
	char *src  = "Papa Renken";
	char *test, test1;
	test = ft_strdup(src);
	test = strdup(src);

	printf("%s", test);
	printf("%c", test1);
	free(test);
	free(test1);
	
}*/