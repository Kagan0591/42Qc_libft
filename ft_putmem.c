# include "libft.h"

unsigned int	ft_putmem(void *mem)
{
	unsigned int	count;

	if (!mem || mem == 0)
		return (write(1, "0x0", 3));
	ft_putstr("0x");
	count = 2;
	count = count + ft_putnbr_long_hexa((unsigned long) mem);
	return (count);
}
