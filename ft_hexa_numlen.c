# include "libft.h"

int	ft_hexa_numlen(unsigned int n)
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
