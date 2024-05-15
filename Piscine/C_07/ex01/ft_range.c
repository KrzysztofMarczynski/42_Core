/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:56:28 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/08 18:30:04 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	x;
	int	*res;

	i = min;
	x = 0;
	res = (int *)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		res[x] = i;
		x++;
		i++;
	}
	return (res);
}

int	main()
{
	char	*x;
	char	*y;
	int		i;
	int		*res;

	x = 5;
	y = 10;
	i = y - x;
	res = (int *)malloc(sizeof(int) * i);
	res = ft_range(x, y);
	printf("%d", res[1]);
}
