#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int a, char *b[])
{
	int i;

	i = 1;
	while (i < a)
	{
		ft_putchar(b[i]);
		i++;
	}
}