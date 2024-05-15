/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:20:05 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/03 21:20:07 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	wynik;
	int	znak;

	wynik = 0;
	znak = 1;
	while (*str == 9 || *str == 10 || *str == 11 || *str == 12 || *str == 13
		|| *str == 32)
	{
		*str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == 45)
		{
			znak *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		wynik *= 10;
		wynik += *str - 48;
		str++;
	}
	return (wynik * znak);
}

int	main(int agrc, char *argv[])
{
	if (agrc != 2)
	{
		printf("W programie \"%s\" podaj tylko jedną wartość \n", argv[0]);
		return (1);
	}
	char *str = argv[1];
	int rezultat;

	rezultat = ft_atoi(str);

	printf("Rezultat: %d\n", rezultat);
}

