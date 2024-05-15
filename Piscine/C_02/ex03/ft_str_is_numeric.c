/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:25:13 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/27 15:25:14 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

//Program działa analagicznie do poprzedniego, z tą różnicą że sprawdza cyfry a nie litery alfabetu

int     ft_str_is_numeric(char *str)
{
    unsigned int i;

    i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= '0' && str[i] <= '9') || (str[i] == '\0'))
        {
            i++;
        }else
        {
            printf("elektryk wysokich napięć 0 zł");
            return 0;
        }
    printf("za mała renta");
    return 1;
    }
}
int     main()
{
    char test1[] = "2   2323";
    ft_str_is_numeric(test1); 

    return 0;
}