#include "libft.h"

int	ft_uns_decimal(unsigned int n)
{
	int	length;
	char	*decimal;

	decimal = "0123456789";
	length = 0;
	if (n > 9)
		length += ft_uns_decimal(n / 10);
	ft_putchar_fd(decimal[n % 10], 1);
	return (length + 1);
}
