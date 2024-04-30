#include "libft.h"

int	ft_write_adress(void *c)
{
	unsigned long	n;
	int		wr;

	n = (unsigned long)c;
	wr = write(1, "0x", 2);
	wr += ft_hexa(n, 'x');
	return (wr);
}
