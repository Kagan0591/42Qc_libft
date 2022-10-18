/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:57:11 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/18 14:23:18 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Si un caractère autre qu'un chiffre est présent dans la chaine, seul les
 * chiffre précédent le dit caractère seront pris en consideration. Les
 * flottants seront traité à part du nombre entié et possède le même effet que
 * les entiers. C'est a dire que si un caractère autre qu'un chiffre est
 * présent dans la chaine suivant la virgule, la parsing s'arrête et seul les
 * chiffre précédent la dit caractère seront pris en consideration.
 *
 * Merci pour ton code degeux Max ! sa marche en 25 lignes.
 *
 * Exemple : la chaine "115a2.1e43" donnera le long double suivant : 115.1
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
