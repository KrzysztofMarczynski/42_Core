/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:12:51 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/28 17:12:53 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	z;
    size = size - 1;

	z = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[z] != '\0')
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (i);
}

