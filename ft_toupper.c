/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:37:43 by krenken           #+#    #+#             */
/*   Updated: 2024/06/13 12:52:52 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_toupper('c'));
	printf("%d\n", toupper('c'));
	printf("%d\n", ft_toupper('7'));
	printf("%d\n", toupper('7'));
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", toupper('A'));
}*/