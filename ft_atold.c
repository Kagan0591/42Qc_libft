/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:57:11 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/26 19:50:24 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /*
 * Merci pour ton code degeux Max ! XD ça marche en 25 lignes.
 */

#include "libft.h"
#include <stdio.h>

long double	ft_atold(const char *str)
{
	long double	numbers;
	int			i;
	int			neg;

	i = 0;
	neg = 1;
	numbers = ft_atoi(str);
	while (*str++)
	{
		if (*str - 1 == '-')
			neg = -1;
		if (*str == 44 || *str == 46)
		{
			str++;
			while (*str >= '0' && *str <= '9')
			{
				numbers = (numbers * 10) + (*str - 48);
				str++;
				i++;
			}
			while (i-- != 0)
				numbers = (numbers / 10);
		}
	}
	return (neg * numbers);
}
