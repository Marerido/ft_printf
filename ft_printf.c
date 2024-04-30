#include "libft/libft.h"

static int	ft_type1(va_list args, const char *str)
{
	int	i;
	int	len;
	char	*ptr;

	i = 0;
	len = 0;
	if (str[i] == 'c')
		len += ft_putchar_fd(va_arg(args, int), 1);
	else if (str[i] == 's')
		len += ft_putstr_fd(va_arg(args, char *), 1);
	else if (str[i] == 'd' || str[i] == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (str[i] == 'x' || str[i] == 'X')
		len += ft_hexa(va_arg(args, int), str[i]);
	else
		len = -1;
	return (len);
}

static int	ft_type2(va_list args, const char *str)
{
	int	i;
	int	len;
	char	*ptr;

	i = 0;
	len = 0;
	if (str[i] == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			len += ft_write_adress(ptr);
		else
		{
			write(1, "0x0", 3);
			len += 3;
		}
	}
	else if (str[i] == 'u')
		len += ft_uns_decimal(va_arg(args, unsigned int));
	else if (str[i] == '%')
		len += ft_putchar_fd('%', 1);
	else
		len = -1;
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c' || str[i] == 's' || str[i] == 'd'
				|| str[i] == 'i' || str[i] == 'x' || str[i] == 'X')
				len += ft_type1(args, &str[i]);
			else if (str[i] == 'p' || str[i] == 'u' || str[i] == '%')
				len += ft_type2(args, &str[i]);
		}
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

#include <stdio.h>
int main() {
    char c = 'A';
    char *s = "Hallo";
    int	d = -4; 
    int x = 255;
	int	*p = &d;
	unsigned int u = 1234567890;

    
    ft_printf("Character: %c\n", c);
	printf("Original Character: %c\n", c);
    ft_printf("String: %s\n", s);
    printf("Original String: %s\n", s);
    ft_printf("Number: %d\n", (int)d);
    printf("Original Dezimal: %d\n", d);
    ft_printf("Dezimal: %i\n", (int)d);
    printf("Original Number: %i\n", d);
    ft_printf("Hex: %x\n", x);
    printf("Original Hex: %x\n", x);
    ft_printf("Hex: %X\n", x);
    printf("Original Hex: %X\n", x);
	ft_printf("Adress: %p \n", p);
	printf("Original Adress: %p\n", p);
	ft_printf("Adress: %u \n", u);
	printf("Original Adress: %u\n", u);
	ft_printf("Adress: %% \n");
	printf("Original Adress: %%\n");
    return 0;
}
