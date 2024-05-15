/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:23:35 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/25 15:23:37 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n) //zdefiniowanie funkcji
{
    unsigned int i; // zmienna odpowiadająca pozycji w łańcuchu

    i = 0;
    while (src[i] != '\0' && i < n) //czy pozycja źródła jest różna od końca łańcucha
    {                               //oraz czy nasza zmienna jest większa niż ponada ilość znaków do wywołania
        dest[i] = src[i]; //przerzucanie zmiennej źródła na miejsce docelowe 
        i++;//zwiększa pozycje zmiennej o jeden co pętle
    }
    while(i < n)//jeśli nasza zmienna "i" jest mniejsza niż ilość wyznaczonej ilości zapisów w x to..
    {
        dest[i] = '\0';//zwiększanie zmiennej docelowej o jeden do czasu aż dotrze do końca łańcucha
        i++;
    }
    return (dest);//jeśli warunki są spełnione to funkcja zwraca wartość "dest"
}

int main(void)
{
    char test1[] = "Karasie jedzą gówno";
    char test2[] = "Sam jesteś gówno jadem\n";
    unsigned int x = 25;

    printf("Dupa: %s \n", test1);
    printf("Pupa: %s \n", ft_strncpy(test1, test2, x));

    return 0;
}