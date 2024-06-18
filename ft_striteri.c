/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:14:15 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 22:25:07 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SYNOPSIS
**    void ft_striteri(char *s, void (*f)(unsigned int, char*));
** DESCRIPTION
**    Apply the function 'f' to each characters of the string 's',
**	  passing its index as a first parameter.
**    Each character is transmitted by address to 'f' so it can be 
**	  modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int				i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s[i]);
		i++;
	}
}
