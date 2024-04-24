#include "libft/libft.h"

/*static void	format(va_list args, const char *str)
{
	int	i;

	i = 0;
	if (str[i] == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
}*/

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	char *s;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				len++;
			}
			if (str[i] == 's')
			{
				ft_putstr_fd(va_arg(args, char *), 1);
				len++;
			}
			if (str[i] == 'd')
			{
				ft_putnbr_fd(va_arg(args, int), 1);
				len++;
			}
		}
		else
			ft_putchar_fd(str[i], 1);
			len++;
		i++;
	}
	va_end(args);
	return (len);
}


#include <stdio.h>

int main(void) 
{
	char	c;
	char	*s;
	int		d;

	c = 'A';
	s = "Das ist ein String";
	d = 2,5;

    ft_printf("Hello, world!\n");
	printf("%d\n", printf("Hello"));

    ft_printf("Character: %c\n", c);
	printf("Character original: %c\n", c);

    ft_printf("String: %s\n", s);
	printf("Character original: %s\n", s);


	ft_printf("Integer: %d\n", d);
	printf("Character original: %d\n", d);


    return 0;
}
