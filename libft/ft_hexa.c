#include "libft.h"

int	ft_hexa(unsigned long n, char c)
{
	char	*hexadecimal;
	int		length;

	if (c == 'x')
		hexadecimal = "0123456789abcdef";
	else
		hexadecimal = "0123456789ABCDEF";
	length = 0;
	if (n > 15)
		length += ft_hexa(n / 16, c);
	ft_putchar_fd(hexadecimal[n % 16], 1);
	return (length + 1);
}
