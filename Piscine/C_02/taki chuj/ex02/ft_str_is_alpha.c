/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:22:37 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/25 20:22:42 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//polecenie mówi ze funkcja ma skanować ciąg znaków, jeśli są w nim tylko znaki
//tylko z alfabetu to wypisuje 1, jeśli zawiera jakieś inne to zwraca 0

int     ft_str_is_alpha(char *str) //zdefiniowanie pointera 
{
    unsigned int i; //nie ujemny wartość i

    i = 0;
    while(str[i] != '\0')// kiedy liczba znaków jest różna od końca łańcucha wykonuje się if
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '\0')) //jeśli nasze znaki zawierają się w alfabecie lub są równe końcu wyrazu '\0'
        {
            i++; //to zwiększa i przechodząc tym samym na kolejny znak naszego łańcucha 
        }else //jeśli nie to 
        {
            printf("nie jebać stare kurwy prądem"); // zwraca 0 i wypisuje printa
            return 0;
        }
    }
    printf("jebać stare kurwy prądem"); // jeśli jednak wszystkie znaki zawierają się w alfabecie to zwraca 1
    return 1;
}

int     main()
{
    char test1[] = "abcdADA2Def   2323"; //znaki testowe
    ft_str_is_alpha(test1); //wywołanie naszej funkcji i wrzucenie do niej test1

    return 0;
}