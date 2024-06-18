/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:57:24 by krenken           #+#    #+#             */
/*   Updated: 2024/06/17 23:27:37 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: lower-case character test
**
** DESCRIPTION:
** 		 The islower() function tests for any lower-case letters.
*/

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
