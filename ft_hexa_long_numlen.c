# include "libft.h"

int	ft_hexa_long_numlen(unsigned long n)
{
	int	count;

	count = 0;
	while (n > 15)
	{
		n /= 16;
		count++;
	}
	count++;
	return (count);
}
