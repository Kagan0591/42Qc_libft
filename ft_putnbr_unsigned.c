# include "libft.h"

unsigned int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = ft_unsigned_numlen(n);
	if ((n / 10) != 0)
		ft_putnbr_unsigned(n / 10);
	ft_putchar((n % 10) + 48);
	return (count);
}
