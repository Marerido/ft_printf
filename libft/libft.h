#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

char	*ft_strchr(const char *str, int c);
void    ft_putchar_fd(char c, int fd);
size_t  ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
