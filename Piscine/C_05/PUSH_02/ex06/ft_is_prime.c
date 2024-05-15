/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:29 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/06 19:20:56 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (x <= (nb / 2))
	{
		if (!(nb % x))
		{
			return (0);
		}
		else
			x++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;

	i = 17;
	printf("%d", ft_is_prime(i));
}*/
