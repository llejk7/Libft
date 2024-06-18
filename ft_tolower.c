/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:53:01 by krenken           #+#    #+#             */
/*   Updated: 2024/06/13 12:57:08 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_tolower('C'));
	printf("%d\n", tolower('C'));
	printf("%d\n", ft_tolower('7'));
	printf("%d\n", tolower('7'));
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", tolower('A'));
}*/