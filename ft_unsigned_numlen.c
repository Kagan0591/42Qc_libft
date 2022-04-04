# include "libft.h"

int	ft_unsigned_numlen(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	count++;
	return (count);
}
