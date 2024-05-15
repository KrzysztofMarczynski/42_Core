/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:13:30 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/23 19:13:32 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src) // zdefiniowanie funkcji
{
	unsigned int i; // zdefiniowanie zmiennej nie ujemnej

	i = 0;                 // zmienna jest równa 0
	while (src[i] != '\0')
		// kiedy nasza docelowa lokalizacja jest różna od końca łancucha to..
	{
		dest[i] = src[i]; // przesyła źródło do naszego miejsca docelowego
		i++;             
			// tutaj przeskakuje na kolejne miejsce w naszym łancuchu znaków
	}
	dest[i] = '\0'; // jeżeli nasze mijesce docelowe jest równe końcu łańcucha
	return (dest);  // nasz program zwraca nasz łańcuch znaków
}
int	main(void)
{
	char cel[] = "before\n"; // To jest tablica do której tablica jest kopiowana
	char zrodlo[] = "after";
		// To jest tablica która jest kopiuje do źródła arr1
	printf("string: %s", cel);            // wydruk naszej tablicy przez zamianą
	printf("%s", ft_strcpy(cel, zrodlo));
		// wydruk naszej tablicy po przesłaniu naszej źródła do miejsca docelowego
	return (0);
}
