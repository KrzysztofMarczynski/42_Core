/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:59:43 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/15 18:44:15 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_printf.h"

static int	ft_print_sign(int input, va_list arguments)
{
	int	i;

	i = 0;
	if (input == 'c')
	{
	}
	if (input == 's')
	{
	}
    if (input == 'p')
	{
	}
    if (input == 'd')
	{
	}
    if (input == 'i')
	{
	}
    if (input == 'u')
	{
	}
    if (input == 'x')
	{
	}
    if (input == 'X')
	{
	}
}

int	ft_printf(const char *input, ...)
{
	va_list	arguments;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(arguments, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
		}
	}
	va_end(arguments);
	return (count);
}

int	main(void)
{
}